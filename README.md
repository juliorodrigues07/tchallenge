 [![Python 3.10.6](https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white)](https://www.python.org/downloads/release/python-3106/)
 [![C99](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf)

# Target Challenge

Challenge developed in the selection process for an internship in analysis and development at Target Sistemas.

# Requirements

- [GCC](https://gcc.gnu.org/onlinedocs/gcc-12.2.0/gcc.pdf):

      sudo apt install build-essential

- [Python3](https://python.org) and [pip](https://pip.pypa.io/en/stable/installation/) package manager:

      sudo apt install python3 python3-pip build-essential python3-dev

- [numpy](https://numpy.org/) library:

      pip install numpy
       
- To install all dependencies:
       
      ./install_dependencies.sh
       
# Execution

The following commands have to be executed inside each according challenge directory.

## Question 2 (_second-challenge_)

- To compile:

      make
       
- Running:

      make run
       
- You can change the value inside the _Makefile_ file (line 12) or execute in the command line using the following template: `./main <number>`

## Question 3 (_third-challenge_)

- Running (_src_ directory):

      python3 summary.py

## Question 4 (_forth-challenge_)

- Running:

      python3 invoicing.py

## Question 5 (_fifth-challenge_)

- To compile:

      make
       
- Running:

      make run
       
- You can change the string inside the _Makefile_ file (line 12) or execute in the command line using the following template: `./main <string>`
 
