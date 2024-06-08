#include<iostream>
using namespace std;

bool alphabetType(char input){
    if (input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U' || input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u'){
        return true;
    } 
    return false;
}

int main(){
    char input;
    cout<<"Enter an alphabet: ";
    cin>>input;
    if (alphabetType(input)){
        cout<<input<<" is a Vowel and its predecessor is "<<char(input-1)<<"."<<endl;
    } else {
        cout<<input<<" is a Consonant and its successor is "<<char(input+1)<<"."<<endl;
    }
    return 0;
}