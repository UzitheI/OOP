#include<iostream>
#include<string.h>
using namespace std;
class Human{
    string name;
    int age;
    public:
    Human(){
        cout<<"this is a non-parametereized default constructor with no parameters"<<endl;
    }
    void get(){
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"enter age:"<<endl;
        cin>>age;
    }
    void show(){
        cout<<"The name is "<<name<<" and the age is "<<age<<endl;
    }
};
int main(){
    Human h1;
    h1.get();
    h1.show();
    return 0;

}