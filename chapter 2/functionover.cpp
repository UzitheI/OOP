#include<iostream>
using namespace std;
void normal(){
    cout<<"this is a normal function"<<endl;
}
void normal(int a, int b){
    int c=a+b;
    //this is a functional overload
    cout<<"The value of c is "<<c<<endl;
}
int main(){
    int a,b;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    normal();
    normal(a,b);
    return 0;
}