#include<iostream>
#include<vector>
#include<string>

using namespace std;

class person
{
protected :

    string name;
    int age;

public :

    person (string n, int a)
{
    name=n;
    age=a;

}

  void display_person()
  {
      cout<<endl<<"name : "<<name<<" , age :"<<age;
  }
};


class emp : public person

{
    protected:

    int id;

public:
    emp(string n, int a, int i) : person(n, a)
    {
        id = i;
    }

    void display_employee()
     {
        display_person();
        cout << " Employee ID: " << id << endl;
    }


};

class manager : public emp
{
protected :

    string department;

public :

    manager(string n, int a, int i,string dep):emp(n,a,i)
    {
        department=dep;
    }

    void display_manager()
    {
        display_employee();
        cout << "Department: " << department << endl;
    }
};


int main()
{
 vector<manager> managers;
    int n;

    cout << "Enter the number of managers: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string name, department;
        int age, id;

        cout << "\nEnter details for Manager " << i + 1 << ":\n";

        cout << "Name : ";
        cin >> name;

        cout << "Age: ";
        cin >> age;

        cout << "Employee ID: ";
        cin >> id;

        cout << "Department : ";
        cin >> department;

        
        managers.push_back(manager(name, age, id, department));
    }
    cout << "\n--- Manager Details ---\n";
    for (size_t i = 0; i < managers.size(); ++i) {
        cout << "\nManager " << i + 1 << ":\n";
        managers[i].display_manager();
    }

    return 0;
}
