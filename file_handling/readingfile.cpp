#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream infile;
    infile.open("myfile.txt");
    int len=100;
    char arr[len];
    while(!infile.eof()){
        infile.getline(arr,len);
        cout<<endl<<arr<<endl;
    
    }
}