#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
    ofstream outf;
    outf.open("myfile.txt");
    outf<<"cowboy bebop";
    ifstream infile;
    infile.open("myfile.txt");
    int len=100;
    char str[len];

    while(!infile.eof()){
        infile.getline(str,len);
        cout<<str<<endl;
    }

}