#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main(){
    ofstream outf;
    outf.open("myfile.txt",ios::app);
    outf<<endl;
    outf<<"Mi madre es muy bonito"<<endl;
}