#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main(){
    ofstream outf;
    outf.open("myfile.txt");
    outf.seekp(2,ios::beg);
    outf<<"Mi padre es comprar chaqueta azul"<<endl;

}