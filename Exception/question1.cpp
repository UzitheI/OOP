#include<iostream>
using namespace std; 
int main(){
    int age;
    cout<<"Enter age:"<<endl;
    cin>>age;
    try{
        if(age<0||age>200){
            throw 200;
        }else{
            cout<<"your age is "<<age<<endl;
        }
    }
    catch(int){
        cout<<"The age does not fit the requirement"<<endl;
    }
}