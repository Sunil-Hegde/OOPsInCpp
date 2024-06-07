#include<iostream>
using namespace std;

class D2;

class D1{
    private:
        int meters;
        int centimeters;
    public:
        void getData(){
            cout<<"Enter distance in meters and centimeters(seperated by spaces): ";
            cin>>meters>>centimeters;
        }
        friend void addDistances(D1 obj1, D2 obj2);
};

class D2{
    private:
        int feet;
        int inches;
    public:
        void getData(){
            cout<<"Enter distance in feet and inches(seperated by spaces): ";
            cin>>feet>>inches;
        }
        friend void addDistances(D1 obj1, D2 obj2);
};

void addDistances(D1 obj1, D2 obj2){
    int totalCms1 = obj1.meters * 100 + obj1.centimeters;
    int totalInches1 = obj2.feet * 12 + obj2.inches;
    int totalCms2 = int(totalInches1 * 2.54);
    int totalCms = totalCms1 + totalCms2;
    int totalInches2 = int(totalCms / 2.54);
    int feet = totalInches2 / 12;
    int inch = totalInches2 % 12;
    cout<<"Total distance in Feets and inches: "<<feet<<" feet(s), "<<inch<<" inch(es)"<<endl;
}

int main(){
    D1 d1;
    D2 d2;
    d1.getData();
    d2.getData();
    addDistances(d1, d2);
    return 0;
}
