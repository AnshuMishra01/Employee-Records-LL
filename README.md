
# Employee Management System


## Overview

The Employee Management System is a C++ application designed to manage employee data efficiently. It provides functionalities to store, retrieve, and manipulate employee details such as names, contact numbers, email addresses, and salaries. The system reads employee data from a file and performs various operations to manage the information effectively.

## Features

Data Storage: Stores employee data such as ID, name, phone number, email, and salary.

Data Retrieval: Fetches employee information based on different criteria.

File Handling: Reads employee data from an external file (data.txt).


Data Manipulation: Allows for operations like sorting, searching, and displaying employee data.


## Files


main.cpp: The main source code file for the Employee Management System. It contains all the logic and functionalities of the application.

data.txt: A text file containing sample employee data in the following format:


`
<Employee ID> <Employee Name> <Phone Number> <Email Address> <Salary>
`


Example:

`
22717 Dalt Denslow 529-792-8120 ddenslow0@odnoklassniki.ru 65060.84
44271 Meryl MacKereth 700-210-9179 mmackereth1@fema.gov 130820.75
`

employee_management.exe: The executable file for the Employee Management System.

## How to Run

Compile the Code:

To compile the main.cpp file, use the following command in your terminal or command prompt:

`
g++ -o employee_management main.cpp
`

Run the Program:

After compiling, run the program using the following command:
`
./employee_management
`

## Provide Data File:

Ensure that the data.txt file is in the same directory as the executable or specify the correct path when prompted by the program.

## Usage
The system allows you to:

Display all employee details.

Search for an employee by ID.

Sort employees by salary or name.

Perform other data management tasks as needed.

## Future Enhancements

Potential future improvements could include:

Implementing a graphical user interface (GUI) for easier interaction.

Adding database support for handling larger datasets.

Integrating additional features such as payroll management.
