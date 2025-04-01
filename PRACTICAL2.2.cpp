#include<iostream>
#include<string>
using namespace std;
class student
{
    int roll_number;
    string name;
    int marks[3];
public:
    void getvalue()
    {
        cout<<"Enter roll number "<<endl;
        cin>>roll_number;
        cin.ignore();
        cout<<"Enter name "<<endl;
        getline(cin,name);
        for(int i=0;i<3;i++)
        {
            cout<<"Enter marks of subject "<<i+1<<endl;
            cin>>marks[i];
        }
    }
    float average()
    {
        int sum=0;
        for(int i=0;i<3;i++)
        {
            sum+=marks[i];
        }
            return sum/3.0;
    }
    void display()
    {
        cout<<roll_number<<endl;
        cout<<name<<endl;
        for(int i=0;i<3;i++)
        {
            cout<<"Marks : "<<marks[i]<<endl;
        }
        cout<<"Average is :"<<average()<<endl;
    }
};
int main()
{
    student students;
    students.getvalue();
    students.display();
    return 0;
}
