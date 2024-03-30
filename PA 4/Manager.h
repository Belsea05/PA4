#ifndef MANAGER_H
#define MANAGER_H
#include <string>

#include "Employee.h"

class Manager : public Employee {
private:
    double bonus;

public:
    // Constructor to initialize manager with name, wage, hours, and bonus
    Manager(std::string theName, double theWage, double theHours, double theBonus);

    // Redefined calcPay() to include bonus in manager's pay
    double calcPay() const;
};

#endif