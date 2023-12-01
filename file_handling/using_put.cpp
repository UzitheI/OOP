#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
    ofstream outf;
    outf.open("myfile.txt");
    char* str="Mi madre es interesante";
    for(int i=0;i<=strlen(str);i++){
        outf.put(str[i]);
        //puts character insdie the file one at a time
    }


}