#include<iostream>
using namespace std;
class A{
    private:
    int a;
    static int count;
    public:
    A(){
        count++;
    }
    void getdata(){
        cout<<"enter a:"<<endl;
        cin>>a;
    }
    void showdata(){
        cout<<"count is "<<count<<endl;
    }

};
int main(){
    A a1,a2,a3,a4,a5,a6;
    a1.getdata();
    a2.getdata();
    a3.getdata();
    a4.getdata();
    a5.getdata();
    a6.getdata();
    a6.showdata();
    return 0;
}