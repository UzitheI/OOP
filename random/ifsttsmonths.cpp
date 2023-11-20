#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the month number:"<<endl;
    cin>>num;

    if(num<=6){
        cout<<"It is in Jan-Jun"<<endl;
    
    }
    else{
        cout<<"It is is Jul-Dec"<<endl;
    }
    return 0;
}