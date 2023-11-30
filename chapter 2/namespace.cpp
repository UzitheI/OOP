#include<iostream>
using namespace std;
namespace first{
    float pi=3.14;
}
int main(){
    int pi;
    cout<<"Enter the value of pi";
    cin>>pi;
    cout<<"The value of pi is "<<first::pi;
    cout<<"The value of the local main pi is "<<pi<<endl;
    return 0;
}