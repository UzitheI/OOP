#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
    ifstream infile;
    int len=100;
    char text[len];
    infile.open("myfile.txt");
    while(!infile.eof()){
        infile.get(text[len]);
        cout<<endl<<text[len];

    }
}