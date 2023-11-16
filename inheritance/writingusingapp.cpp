#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream outf("inheritance.txt");
    outf.seekp(0,ios::end);
    outf<<endl;
    outf<<"Hybrid Inheritance"<<endl;
}