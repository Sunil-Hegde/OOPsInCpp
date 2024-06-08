#include<iostream>
using namespace std;

class student{
    public:
        int regNo, semester;
        char name[20], branch[5];
        void getData(){
            cout<<"\tEnter Student Register No., Branch and Semester: ";
            cin>>regNo>>branch>>semester;
            cout<<"\tEnter Student name: ";
            cin>>name;
        }
};

class marks:public student{
    public:
        int marks1, marks2, marks3;
        void getData(){
            student::getData();
            cout<<"\tEnter student's Marks 1, Marks 2, Marks 3: ";
            cin>>marks1>>marks2>>marks3;
        }
        float averageMarksCalculate(){
            return (marks1+marks2+marks3)/3;
        }
};

class sports{
    public:
        char sportsGrade;
        void getSports(){
            cout<<"\tEnter student's sports grade: ";
            cin>>sportsGrade;
        }
};

class awards:public marks, public sports{
    public:
        void display(){
            cout<<"\tStudent Name: "<<student::name<<endl;
            cout<<"\tStudent Reg. No.: "<<student::regNo<<endl;
            cout<<"\tStudent Semester and Branch: "<<student::semester<<", "<<student::branch<<endl;
            cout<<"\tStudent Average Marks: "<<marks::averageMarksCalculate()<<endl;
            cout<<"\tStudent Sports Grade: "<<sports::sportsGrade<<endl;
        }
};

int main(){
    awards student1;
    cout<<"Enter Student details:\n";
    student1.getData();
    student1.getSports();
    cout<<"\nStudent Details:\n";
    student1.display();
    return 0;
}