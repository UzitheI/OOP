#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    ofstream outf;
    char* str="my name is ujjwal puri";
    outf.open("myfile.txt");
    for(int i=0;i<=strlen(str);i++){
        outf.put(str[i]);
        cout<<endl<<str[i];
    }
    cout<<endl<<"file write completed"<<endl;
    
}
