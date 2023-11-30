//the main feature of inline function is that it isthat the code processing doesn't take place outside the main function, rather the portion of the code present inside the main function is brought inside the main program and then processed 
//this also means that the inline function shouldnt be very large, if they are large it wont make sense to create inline functions to be brought inside the main program and computation to be much faster


#include<iostream>
using namespace std;
inline void sum(int a, int b){
    int c;
    c=a+b;
    cout<<"the sum is "<<c<<endl;
}
int main(){
    int a,b;
    cout<<"Enter a:"<<endl;
    cin>>a;
    cout<<"Enter b:"<<endl;
    cin>>b;
    sum(a,b);
    return 0;
}