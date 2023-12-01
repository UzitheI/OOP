#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream outf;
    outf.open("newfile.txt");
    outf<<"My name is Ujjwal Puri"<<endl;
    outf.close();
    ifstream inf;
    inf.open("myfile.txt");
    int len=100;
    char arr[len];
    while(!inf.eof()){
        inf.getline(arr,len);
        cout<<endl<<arr<<endl;

    }

}
/*
app->append at the end of file
ate->start from the end of file
binary->open in binary mode
in-> open in read mode
nocreate->
noreplace->
out
trunc
*/