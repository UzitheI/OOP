#include<iostream>
#include<math.h>
using namespace std;
int sqroot(double n){
    if(n<0){
        throw n;
    }
    else{
        cout<<"the square root is "<<sqrt(n)<<endl;
    }
}

int main(){
    double n,r;
    try{
        cout<<"Enter the value of n:"<<endl;
        cin>>n;
        r=sqroot(n);
    }
    catch(double n){
        cout<<n<<"is a negative number"<<endl;

    }
}