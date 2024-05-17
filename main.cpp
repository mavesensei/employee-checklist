#include <iostream>
#include "Date.cpp"
#include "Employee.cpp"
using namespace std;
int main(){
    Date birth(9, 12, 1983);
    Date hire(1, 19, 2000);
    Employee manager("Clint", "Harrington", birth, hire);
    cout << "\n";
    manager.print();
}