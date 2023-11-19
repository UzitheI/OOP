#include<iostream>
using namespace std;
template <class T>
 
T mymax(T a, T b){
    return (a>b?a:b);
}
int main(){
    int a=4,b=5;
    cout<<"The greater is"<<mymax(a,b);
    char c='c',d='d';
    cout<<"The greater is "<<mymax(c,d);
    return 0;
}