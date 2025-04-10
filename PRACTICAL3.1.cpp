#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Employee
 {
    string name;
    double basicSalary;
    double bonus;

public:

    Employee(string empName, double salary, double empBonus = 1000.0)
        : name(empName), basicSalary(salary), bonus(empBonus) {}


    inline double calculateTotalSalary() const {
        return basicSalary + bonus;
    }


    void displayDetails() const {
        cout << "Name: " << name << "\n";
        cout << "Basic Salary: " << basicSalary << "\n";
        cout << "Bonus: " << bonus << "\n";
        cout << "Total Salary: " << calculateTotalSalary() << "\n";
        cout << "----------------------\n";
    }
};

int main() {
    vector<Employee> employees;

    int numEmployees;
    cout << "Enter number of employees: ";
    cin >> numEmployees;

    for (int i = 0; i < numEmployees; i++) {
        string name;
        double basicSalary, bonus;

        cout << "\nEnter details for employee " << (i + 1) << ":\n";
        cout << "Enter name ";
        cin >> name;
        cout << "Enter basic salary: ";
        cin >> basicSalary;
        cout << "Enter bonus (enter -1 to use default bonus of 1000): ";
        cin >> bonus;

        if (bonus == -1)
        {
            bonus = 1000.0;
        }

        employees.emplace_back(name, basicSalary, bonus);
    }

    cout << "\nEmployee Details:\n";
    for (const auto& emp : employees)
    {
        emp.displayDetails();
    }

    return 0;
}
