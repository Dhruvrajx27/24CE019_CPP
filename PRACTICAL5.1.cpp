#include<iostream>
using namespace std;

class Calculator {
public:
    void add(int num1, int num2) {
        int sum = num1 + num2;
        cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    }

    void add(float num1, float num2) {
        float sum = num1 + num2;
        cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    }

    void add(int num1, float num2) {
        float sum = num1 + num2;
        cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    }

    void add(float num1, int num2) {
        float sum = num1 + num2;
        cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    }
};

int main() {
    Calculator calc;

    int choice;
    cout << "Choose type of numbers to add:\n";
    cout << "1. Integer\n";
    cout << "2. Float\n";
    cout << "3. Integer and Float\n";
    cout << "Enter choice (1, 2, or 3): ";
    cin >> choice;

    if (choice == 1) {
        int a, b;
        cout << "Enter two integers: ";
        cin >> a >> b;
        calc.add(a, b);
    }
    else if (choice == 2) {
        float x, y;
        cout << "Enter two float numbers: ";
        cin >> x >> y;
        calc.add(x, y);
    }
    else if (choice == 3) {
        int a;
        float b;
        cout << "Enter one integer and one float: ";
        cin >> a >> b;
        calc.add(a, b);
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}

