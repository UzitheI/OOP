#include<iostream>
using namespace std;
class Human{
    private:
    string name;
    int age;
    public:
    Human(){
        cout<<"Enter the name:"<<endl;
        cin>>name;
        cout<<"Enter age:"<<endl;
        cin>>age;
    }
    Human(const Human h1){

    }
}