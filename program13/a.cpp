#include<iostream>
using namespace std;

class student{
    public:
        int reg, age;
        string name;
        void readData();
};

class ugStudent:public student{
    public:
        int semester, fees, stipend;
        void readData();
};

class pgStudent:public student{
    public:
        int semester, fees, stipend;
        void readData();
};

void student::readData(){
    cout << "\t\tEnter Student Registration No. and Age: ";
    cin >> reg >> age;
    cout << "\t\tEnter Student Name: ";
    cin.ignore(); // Ignore the newline character left in the input buffer
    getline(cin, name);
}

void ugStudent::readData(){
    student::readData();
    cout << "\t\tEnter Student semester, fees and Stipend: ";
    cin >> semester >> fees >> stipend;
}

void pgStudent::readData(){
    student::readData();
    cout << "\t\tEnter Student semester, fees and Stipend: ";
    cin >> semester >> fees >> stipend;
}

void averageAgeUG(ugStudent array1[], int numberOfStudents){
    float ugsemCount[7] = {0};
    float ugsemAgeCount[7] = {0};
    for(int i = 1; i < 8; i++){
        for(int j = 0; j < numberOfStudents; j++){
            if(array1[j].semester == i){
                ugsemCount[i-1]++;
                ugsemAgeCount[i-1] += array1[j].age;
            }
        }
    }
    for(int i = 1; i < 8; i++){
        if(ugsemCount[i-1] != 0){
            cout << "\tAverage for UG Semester " << i << " is " << ugsemAgeCount[i-1] / ugsemCount[i-1] << endl;
        } else {
            cout << "\tNo studentsin UG Semester " << i << endl;
        }
    }
}

void averageAgePG(pgStudent array2[], int numberOfStudents){
    float pgsemCount[7] = {0};
    float pgsemAgeCount[7] = {0};
    for(int i = 1; i < 8; i++){
        for(int j = 0; j < numberOfStudents; j++){
            if(array2[j].semester == i){
                pgsemCount[i-1]++;
                pgsemAgeCount[i-1] += array2[j].age;
            }
        }
    }
    for(int i = 1; i < 8; i++){
        if(pgsemCount[i-1] != 0){
            cout << "\tAverage for PG Semester " << i << " is " << pgsemAgeCount[i-1] / pgsemCount[i-1] << endl;
        } else {
            cout << "\tNo studentsin PG Semester " << i << endl;
        }
    }
}

int main(){
    int ugn, pgn;
    cout << "Number of UG Students: ";
    cin >> ugn;
    ugStudent ugstudentList[ugn];
    for(int i = 0; i < ugn; i++){
        cout << "\tEnter details for UG Student " << i+1 << " :\n";
        ugstudentList[i].readData();
    }
    cout << "Number of PG Students: ";
    cin >> pgn;
    pgStudent pgstudentList[pgn];
    for(int i = 0; i < pgn; i++){
        cout << "Enter details for PG Student " << i+1 << " :\n";
        pgstudentList[i].readData();
    }
    cout << "Average age in UG:\n";
    averageAgeUG(ugstudentList, ugn);
    cout << "Average age in PG:\n";
    averageAgePG(pgstudentList, pgn);
    return 0;
}
