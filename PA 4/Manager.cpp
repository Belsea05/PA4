#include "Manager.h"

Manager::Manager(std::string theName, double theWage, double theHours, double theBonus) :
    Employee(theName, theWage, theHours), bonus(theBonus) {}

double Manager::calcPay() const {
    // Call the base class calcPay() for hourly wage and add bonus
    return Employee::calcPay() + bonus;
}