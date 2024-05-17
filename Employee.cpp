#include <iostream>
#include "Employee.h"
using namespace std;
Employee::Employee(const string &first, const string &last, const Date &dateOfBirth, const Date &dateOfHire)
    : firstName(first),
      lastName(last),
      birthDate(dateOfBirth),
      hireDate(dateOfHire){
        cout << "Employee object constructor: " << firstName << ' ' << lastName << "\n";
}
void Employee::print() const {
    cout << lastName << ", " << firstName << "\nHired: ";
    hireDate.print();
    cout << "\nBirthday: ";
    birthDate.print();
    cout << "\n";
}
Employee::~Employee(){
    cout << "Employee object destructor: " << lastName << ", " << firstName << "\n";
}