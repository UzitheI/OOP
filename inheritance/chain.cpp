#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A(){
        cin>>a;
        cout<<a;
        cout<<"First constructor called"<<endl;
    }
    ~A(){
        cout<<"First destructor called"<<endl;
    }
};
class B:public A{
    public:
    B(){
        cout<<"Second constructor called"<<endl;
    }
    ~B(){
        cout<<"Secon destructor called"<<endl;
    }
};

int main(){
    B b;
    return 0;
}