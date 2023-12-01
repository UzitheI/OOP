#include<iostream>
using namespace std;
template <class T>
T maxi( T a, T b){
    if(a>b){
        cout<<a<<"is greater than "<<b<<endl;
    }
    else{
        cout<<b<<" is greater than "<<a<<endl;
    }
}
int main(){
    int a=4,b=5;
    float d=3.4,e=2.3;
    maxi(a,b);
    maxi(d,e);
    return 0;
}
