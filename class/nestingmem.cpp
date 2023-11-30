#include<iostream>
using namespace std;
class A{
    private:
    int principal;
    int rate;
    int time;
    public:
    void getdata(){
        cout<<"Enter principal:"<<endl;
        cin>>principal;
        cout<<"Enter rate:"<<endl;
        cin>>rate;
        cout<<"Enter time:"<<endl;
        cin>>time;
    }
    int findint(){
        int interest=principal*time*rate/100;
        cout<<"The value of interest is "<<interest<<endl;
        return interest;
    }
    void findamount(){
        int amount=principal+findint();
        cout<<"The amount is "<<amount<<endl;
    }

};
int main(){
    A a1;
    a1.getdata();
    a1.findint();
    a1.findamount();
    return 0;
}