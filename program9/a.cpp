#include<iostream>
using namespace std;

template<class T>
T successor(T input){
    return input+1;
}

template<class X>
X sumOfAllElements(X array[], int size){
    X total = 0;
    for(int i = 0; i < size; i++){
        total+=array[i];
    }
    return total;
}

int main(){
    cout<<"Successor of a: "<<successor('a')<<endl;
    cout<<"Successor of 10: "<<successor(10)<<endl;
    cout<<"Successor of 11.5: "<<successor(11.5)<<endl;

    int integerArray[] = {1,2,3,4,5};
    int integerArraySize = sizeof(integerArray)/sizeof(int);
    double doubleArray[] = {1.1,2.2,3.3,4.4,5.5};
    int doubleArraySize = sizeof(doubleArray)/sizeof(double);
    float floatArray[] = {1.25, 2.36,3.47,4.89,5.68};
    int floatArraySize = sizeof(floatArray)/sizeof(float);
    cout<<"Sum of all elements of Integer array: "<<sumOfAllElements(integerArray, integerArraySize)<<endl;
    cout<<"Sum of all elements of Double array: "<<sumOfAllElements(doubleArray, doubleArraySize)<<endl;
    cout<<"Sum of all elements of Float array: "<<sumOfAllElements(floatArray, floatArraySize)<<endl; 
    return 0;
}