#include<iostream>
using namespace std;
class employee{
    int id;
    public:
    void get(){
        cout<<"Enter id:"<<endl;
        cin>>id;
    }
    void show(){
        cout<<"The id is "<<id<<endl;
    }
};
class company{
    int comp;
    employee e;
    public:
    void getdata(){
        cout<<"Enter comp data:"<<endl;
        cin>>comp;
        e.get();
    }
    void showdata(){
        cout<<"The comp  is "<<comp<<endl;
        e.show();
    }
};
int main(){
    company c1;
    c1.getdata();
    c1.showdata();
    return 0;
}