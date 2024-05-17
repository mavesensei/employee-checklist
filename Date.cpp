#include <iostream>
#include <stdexcept>
#include "Date.h"
using namespace std;
Date::Date(int mn, int dy, int yr){
    if(mn > 0 && mn <= monthsPerYear)
        month = mn;
    else
        throw invalid_argument("Months must be 1-12");
    year = yr;
    day = checkDay(dy);
    cout << "Date object constructor for date: ";
    print();
    cout << "\n";
}
void Date::print() const {
    cout << month << "/" << day << "/" << year;
}
Date::~Date(){
    cout << "Date object destructor for date ";
    print();
    cout << "\n";
}
int Date::checkDay(int testDay) const{
    static const int daysPerMonth[monthsPerYear + 1] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(testDay > 0 && testDay <= daysPerMonth[month])
        return testDay;
    if(month == 2 && testDay == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
        return testDay;
    throw invalid_argument("Invalid day for current month and year.");
}