#include<iostream>
using namespace std;
int main(){
    try{
        throw 20;
    }
    catch(int x){
        cout<<"Output no :"<<x<<endl;
    }
    return 0;
}