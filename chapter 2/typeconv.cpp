//type conversion is the process of converting from one type to another either implicitly or explicitly
//implicit type conversion is the process of converting the type of lower data type to a higher data type by the c++ compiler itself. The lower to higher data type are in the sequence:
/*
long double
double 
float 
int 
char*/
#include<iostream>
using namespace std;
int main(){
    char a='a';
    long double b=a;
    int d=45;;
    cout<<a<<" is converted into "<<b<<endl;
    //this is an example of implicit conversion done by the c++ compiler itself
    cout<<d<<" is converted to "<<float(d)<<endl;
    //this is explicit conversion where the programmer decides what the data is being converted into
    return 0;
}