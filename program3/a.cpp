#include<iostream>
#include<math.h>
using namespace std;

extern "C"{
    double mySqrt(double x){
        return sqrt(x);
    }
}

int main(){
    double x = 64;
    cout<<"Square root of 64 using extern C linkage: "<<mySqrt(x)<<endl;
    return 0;
}