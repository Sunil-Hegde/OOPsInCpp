#include<iostream>
using namespace std;

class employee{
    private:
        int empID;
        string empName;
        float empBasic;
        float empDA;
        float empHRA;
        float empNetSalary;
    
    public:
        void readData(){
            cout<<"\tEnter Employee ID, Employee Name, Basic Salary, DA and HRA: ";
            cin>>empID>>empName>>empBasic>>empDA>>empHRA;
        }
        void calculateNetSalary(){
            empNetSalary = empBasic + empDA + empHRA;
        }
        void display(){
            cout<<"\nEmployee ID: "<<empID<<endl;
            cout<<"Employee Name: "<<empName<<endl;
            cout<<"Embloyee Salary: "<<empNetSalary<<endl;
        }
};

int main(){
    int n;
    cout<<"Enter the number of employee data you want to enter: ";
    cin>>n;
    employee emp[n];
    for(int i = 0; i<n; i++){
        cout<<"\nEnter details for employee "<<i+1<<":\n";
        emp[i].readData();
        emp[i].calculateNetSalary();
    }
    for(int i = 0; i<n; i++){
        emp[i].display();
    }
    return 0;
}