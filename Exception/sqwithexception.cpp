#include<iostream>
#include<math.h>
using namespace std;
int sqroot(double n){
    try{

   if(n<0){
    throw n;
   }
   else{
    cout<<"the square root of n is"<<sqrt(n)<<endl;
   }
    }
    catch(double n){
        cout<<n<<"is a negative number, so it cannot have a square root"<<endl;
    }
}
int main(){
    double n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    sqroot(n);
    return 0;
}