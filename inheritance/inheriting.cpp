#include<iostream>
#include<string.h>
using namespace std;
class A{
    private:
    string name;
    int age;
    public:
    A(){
        cout<<"first constructor called"<<endl;
    }
    void getdata(){
        cout<<"Enter string"<<endl;
        cin>>name;
        cout<<"Enter age"<<endl;
        cin>>age;
    }
    void showdata(){
        cout<<"The name is "<<name<<endl;
        cout<<"the age is "<<age<<endl;
    }

};

class B:public A{
    private:
    int roll;
    public:
    B(){
        cout<<"Second constructor called"<<endl;
    }
    void get(){
        cout<<"Enter roll:"<<endl;
        cin>>roll;

    }
    void put(){
        cout<<"teh roll number is "<<roll<<endl;
    }
};

int main(){
    B b;
    b.getdata();
    b.get();
    b.showdata();
    b.put();
    return 0;

}