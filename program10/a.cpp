#include<iostream>
using namespace std;

class complex{
    private:
        float real;
        float img;
    public:
        //Default Constructor
        complex(){
            real = 0;
            img = 0;
        }
        //Parameterised Constructor
        complex(float r, float i){
            real = r;
            img = i;
        }
        complex(float r){
            real = r;
            img = 0;
        }
        //Adding two complex numbers
        complex add(complex c){
            complex result;
            result.real = real + c.real;
            result.img = img + c.img;
            return result;
        }
        //Adding a complex number and an integer
        complex add(float r){
            complex result;
            result.real = real + r;
            result.img = img;
            return result;
        }
        void display(){
            if (img < 0){
                cout<<real<<" - i"<<-img<<endl;
            } else {
                cout<<real<<" + i"<<img<<endl;
            }
        }
};

int main(){
    complex c1(4, 5);
    complex c2(3, -2);
    complex c3(5);

    complex c4 = c1.add(c2);
    complex c5 = c3.add(2);

    cout<<"C1 = ";
    c1.display();

    cout<<"C2 = ";
    c2.display();

    cout<<"C3 = ";
    c3.display();

    cout<<"C1 + C2 = ";
    c4.display();

    cout<<"C3 + 2 = ";
    c5.display();

    return 0;
}