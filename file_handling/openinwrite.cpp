#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream outf;
    outf.open("myfile.txt",ios::out);
    outf<<"Mi padre es muy inteligente"<<endl;
    


}