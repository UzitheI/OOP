#include<iostream>
using namespace std;
class Staff{
    int code;
    char name[100];
    public:
    void getdata(){
        cout<<"Enter code:";
        cin>>code;
        cout<<"Enter name:";
        cin>>name;
    }
    void showdata(){
        cout<<"The name of the staff is "<<name<<" and the code of the staff is "<<code<<endl;
    }
};
class Teacher: public Staff{
    char subject[100];
    int salary;
    public:
    void get(){
        cout<<"Enter subject:";
        cin>>subject;
        cout<<"Enter salary:";
        cin>>salary;


    }
    void show(){
        cout<<"The subject is "<<subject<<" and the salary is "<<salary<<endl;
    }
};
class Typist: public Staff{
    int speed;
    public:
    void getSpeed(){
        cout<<"Enter speed "<<endl;
        cin>>speed;
    }
    void showSpeed(){
        cout<<"the speed of the typist is "<<speed<<endl;
    }
};
int main(){
    Teacher T1;
    Typist T;
    T1.get();
    T1.getdata();
    T1.showdata();
    T1.show();
    T.getdata();
    T.showdata();
    T.getSpeed();
    T.showSpeed();
    return 0;
}