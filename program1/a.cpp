#include<iostream>
using namespace std;

int powerFun(int number, int power = 2){
    int result = 1;
    for(int i = 0; i<power;i++){
        result = result * number;
    }
    return result;
}

int main(){
    int number, power;
    cout<<"Enter the number: ";
    cin>>number;
    cout<<"Enter the power it should be raised to: ";
    cin>>power;
    cout<<number<<" raised to power "<<power<<" is "<<powerFun(number, power)<<endl;
    cout<<number<<" raised to power 2(by defalut argument) is "<<powerFun(number)<<endl;
    return 0;
}