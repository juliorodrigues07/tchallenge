import re

invoicing = {'SP': 'R$ 67.836,43',
             'RJ': 'R$ 36.678,66',
             'MG': 'R$ 29.229,88',
             'ES': 'R$ 27.165,48',
             'Outros': 'R$ 19.849,53'}


def main():

    # Cannot use because dict values are in currency format
    # print(sum(invoicing.values()))

    # For each state and its value in the dictionary
    for state in invoicing:
        str_value = invoicing[state]

        # Removes anything but numbers and the comma from the values using regex
        with_comma = re.sub("[^-0-9,]", '', str_value)

        # Replaces the comma with dot to match the python language number representation and converts it to float
        invoicing[state] = float(with_comma.replace(',', '.'))

    total = sum(invoicing.values())

    for state in invoicing:

        # Divides each state amount by the total and multiplies by 100 to obtain the percentage of the total
        proportion = invoicing[state] / total * 100.0

        if state != 'Outros':
            print(f'{state} had {round(proportion, 2)}% on the distributor\'s monthly total.\n')
        else:
            print(f'The other states had {round(proportion, 2)}% on the distributor\'s monthly total.\n')


if __name__ == '__main__':
    main()
