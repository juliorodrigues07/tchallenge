from numpy import mean
from json import load
from os import getcwd
from os import chdir


class Main:

    @staticmethod
    def monthly_summary():

        try:
            chdir('..')
            with open(getcwd() + '/data/dados.json') as json_file:
                month_data = load(json_file)

                # Gets the list with all the invoicings from each day which raw values were above zero
                raw_values = list(day['valor'] for day in month_data if day['valor'] > 0)

                # Obtains the smallest and biggest values observed in the month
                min_value = min(raw_values)
                max_value = max(raw_values)

                # Iterates over the data to display the summary
                for day in month_data:

                    # A) Display the day that had the smallest invoicing
                    if day['valor'] == min_value:
                        print(f'Day {day["dia"]} had the smallest invoicing: {min_value}\n')

                    # B) Display the day that had the biggest invoicing
                    if day['valor'] == max_value:
                        print(f'Day {day["dia"]} had the biggest invoicing: {max_value}\n')

                # C) Counts the number of days that the invoicings were above the average (sum of elements)
                average = mean(raw_values)
                above_average = sum(day['valor'] > average for day in month_data)

                print(f'There were a total of {above_average} '
                      f'days which the invoicing was above the average ({average}).\n')

        except (IsADirectoryError, NotADirectoryError, FileNotFoundError, RuntimeError, IndexError) as excp:
            print('It occurred an unexpected error!\n')
            raise excp


if __name__ == '__main__':
    Main().monthly_summary()
