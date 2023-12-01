#include<iostream>
using namespace std;
class Proper{
    public: 
    virtual void show()=0;
};
class un:public Proper{
    public: 
    void show(){
        cout<<"This is a proper class"<<endl;
    }
};
int main(){
    Proper *p;
    un u;
    p=&u;
    p->show();
    //this is the feature of virtual function and this is how polymorphism happens
    return 0;
}