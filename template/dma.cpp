#include<iostream>
using namespace std; 
int main(){
    int *p=new int;
    int a;
    p=&a;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<a<<endl;
}