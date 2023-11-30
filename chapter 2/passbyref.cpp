#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=4,b=5;
    swap(a,b);
    cout<<"after swaping the value of a is "<<a<<" and the value of b is "<<b<<endl;
    return 0;
}