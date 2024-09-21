#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream file1("File1.txt");
    string input;
    cout<<"Enter contents for File 1: ";
    getline(cin, input);
    file1<<input;
    file1.close();
    ifstream file1read("File1.txt");
    string content;
    string line;
    while (getline(file1read, line)) {
        content += line + '\n';
    }
    file1read.close();
    string reversed;
    for (int i = content.size() - 1; i >= 0; --i) {
        reversed += content[i];
    }
    ofstream file2("File2.txt");
    file2<<reversed;
    file2.close();

    cout << "Contents of File1.txt have been reversed and written to File2.txt" << endl;
    return 0;
}