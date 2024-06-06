#include<iostream>
#include<string>
#include<cctype>
using namespace std;

void counter(string input){
    int whitespaces = 0, characters = 0, digits = 0;
    for(int i = 0; i<input.length(); i++){
        if(isalpha(input[i]))
            characters++;
        if(isdigit(input[i]))
            digits++;
        if(isspace(input[i]))
            whitespaces++;
    }
    cout<<"Alphabet count: "<<characters<<endl;
    cout<<"Word count: "<<whitespaces+1<<endl;
    cout<<"Digit count: "<<digits<<endl;
}

int main(){
    string input;
    cout<<"Enter line with whitespaces, digits and characters: ";
    getline(cin, input);
    counter(input);
    return 0;
}