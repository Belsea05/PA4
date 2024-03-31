This program calculates the total value that the managers make. 
The program calculates the Employee's pay wage then adds the managers bonus on top of the pay wage to find the total amount made.

There are 5 files:
PA4.cpp which is Main.cpp
Employee.cpp
Employee.h
Manager.cpp
Manager.h

In Main: 
      - We create a dynamic array that can hold up to 100 managers.
      - We then find the pay rate of each manager by user input, then we find the total number of hours each manager worked by user input.
      - After we add the bonus (that the user inputs) that each manager gets to the total amount made of each manager.
      - Then we display the highest paid manager and the average that all the managers made.

In Employee.h:
      - Sets up the Emplyee class
      - creates a new employee
      - sets up the calcPay() function
      - sets up the getName() function

Employee.cpp
      - sets up the constructor definition of Employee
      - defines the calcPay() function
      - defines the getName() function

Manager.h:
      - creates a derived class Manager from class Employee
      - Creates a constructor definition of Manager
      - redefines the calcPay() function
      - adds the new variable bonus, for the managers only

Manager.cpp:
      - defines the contructor for the Manager class
      - calls the calcPay() function of the Employee class and adds the bonus to it
