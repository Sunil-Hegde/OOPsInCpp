#include<iostream>
using namespace std;

int search(int array[], int size, int key){
    for(int i = 0; i < size; i++){
        if(array[i] == key){
            return i;
        }
    }
    return 0;
}

int search(double array[], int size, double key){
    for(int i = 0; i < size; i++){
        if(array[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int integerArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int size = 5;
    int integerIndex = search(integerArray, size, 3);
    int doubleIndex = search(doubleArray, size, 4.4);

    if(integerIndex != -1){
        cout<<"Integer key value 3 found at index "<<integerIndex<<endl;
    } else {
        cout<<"Integer key value not found."<<endl;
    }

    if(doubleIndex != -1){
        cout<<"Integer key value 4.4 found at index "<<doubleIndex<<endl;
    } else {
        cout<<"Integer key value not found."<<endl;
    }
    return 0;
}