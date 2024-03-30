/*# Author:         Braiden Elsea
# BannerID:         001397014
# Course:           CS 181
# Assignment:       PA4
# Date Assigned:    Monday, March 18, 2024
# Date/Time Due:    Saturday, March 30, 2024 -- 11:55 pm

# Description:      This program will exercise on procedural
                    programming concepts with C++.
                    
# Certification of Authenticity:
    I certify that this assignment is entirely my own work. */
#include <string>
#include <iostream>
#include <iomanip> // For setprecision
#include "Manager.h"
#include "Employee.h"
#include "Employee.cpp"
#include "Manager.cpp"


using namespace std;



int main() {
  int numManagers;
  cout << "Enter number of managers: ";
  cin >> numManagers;

cout <<endl;
  // Validate user input for positive number of managers
  if (numManagers <= 0) {
    cout << "Error: Please enter a positive number of managers." << endl;
    return 1;
  }

  // Create an array of pointers to Manager objects
  Manager* managers[100];  // Assuming max of 100 managers
  
  // Clear input buffer
  cin.ignore();

  // Loop to get information for each manager and create objects dynamically
  for (int i = 0; i < numManagers; ++i) {
    string name;
    double wage, hours, bonus;

    cout << "Enter manager " << i << " name: ";
    getline(cin, name);    
    
    cout << "Enter manager " << i << " hourly wage: ";
    cin >> wage;
    cin.ignore(); // Clear input buffer

    cout << "Enter manager " << i << " hours worked: ";
    cin >> hours;
    cin.ignore(); // Clear input buffer

    cout << "Enter manager " << i << " bonus: ";
    cin >> bonus;
    cin.ignore(); // Clear input buffer

cout <<endl;
    // Dynamically allocate memory for new Manager object
    managers[i] = new Manager(name, wage, hours, bonus);
  }

  // Find highest paid manager and calculate total pay for all managers
  double highestPay = 0.0;
  string highestPaidName;
  double totalPay = 0.0;
  for (int i = 0; i < numManagers; ++i) {
    double currentPay = managers[i]->calcPay();
    totalPay += currentPay;

    if (currentPay > highestPay) {
      highestPay = currentPay;
      highestPaidName = managers[i]->getName();
    }
  }

  // Calculate average pay
  double averagePay = totalPay / numManagers;

  // Print results
  cout << "Highest paid manager is " << highestPaidName << " who is paid $"
       << fixed << setprecision(2) << highestPay << endl;
  cout << "Average pay is $" << fixed << setprecision(2) << averagePay << endl;

  // Deallocate memory for dynamically created Manager objects
  for (int i = 0; i < numManagers; ++i) {
    delete managers[i];
  }

  return 0;
}
