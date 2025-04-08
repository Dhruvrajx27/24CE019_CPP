#include<iostream>
#include<string.h>
using namespace std;


 class student
 {
     int rollnumber;
     string name;
     int marks[3];
public:

     student()
     {
     rollnumber=0;
     name="default name";
     marks[0]=marks[1]=marks[2]=0;
     }



     student(int r,string n,int m1,int m2,int m3)
     {
         rollnumber=r;
         name=n;
         marks[0]=m1;
         marks[1]=m2;
         marks[2]=m3;


     }




     double cal_avg()
     {
         return (marks[0]+marks[1]+marks[2])/3.0;
     }





     void display()

     {
         cout<<"ROLL NUMBER :" <<rollnumber<<endl;
         cout<<"NAME : "<<name<<endl;
         cout<<"AVERAGE MARKS : "<<cal_avg()<<endl;

     }
 };


 int main()
 {
     student s[3];


     for(int i=0; i<3 ; i++)
     {


     int roll,m1,m2,m3;
     string name;



      cout<<"Enter details for student "<<i+1<<endl;
      cout<<"enter roll number :";
      cin>>roll;
      cout<<"enter name :";
      cin>>name;
      cout<<"enter marks of three subjects :";
      cin>>m1>>m2>>m3;


      s[i]=student(roll,name,m1,m2,m3);

     }



     for(int i=0 ; i<3 ; i++)
     {
         cout<<endl<<"student "<<i+1<<"Details :"<<endl;
         s[i].display();
     }



     return 0;
 }
