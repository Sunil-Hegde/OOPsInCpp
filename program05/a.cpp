#include<iostream>
using namespace std;

void takeInput(int *a, int n){
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
}

void printArray(int *a, int n){
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void operations(int *a, int *b, int n){
    int andOp[n], orOp[n], xorOp[n];
    for(int i = 0; i<n; i++){
        andOp[i] = a[i] & b[i];
        orOp[i] = a[i] | b[i];
        xorOp[i] = a[i] ^ b[i];
    }
    cout<<"AND Operation: ";
    printArray(andOp, n);
    cout<<"OR Operation: ";
    printArray(orOp, n);
    cout<<"XOR Operation: ";
    printArray(xorOp, n);
}

int main(){
    int n;
    cout<<"Enter number of bits: ";
    cin>>n;
    int a[n], b[n];
    cout<<"Enter first number in binary (seperated by spaces): ";
    takeInput(a,n);
    cout<<"Enter second number in binary (seperated by spaces): ";
    takeInput(b,n);
    operations(a, b, n);
    return 0;
}