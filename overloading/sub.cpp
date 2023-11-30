#include<iostream>
using namespace std;
class alpha{
    private:
    int len,bre;
    public:
    alpha(){

    }
    void getdata(){
       cout<<"Enter length "<<endl;
       cin>>len;
       cout<<"Enter breadth:"<<endl;
       cin>>bre;
    }
    alpha operator -(alpha a2){
        alpha a1;
        a1.len=len-a2.len;
        a1.bre=bre-a2.bre;
    }
    void show(){
        alpha a1;
        cout<<a1.len<<endl;
        cout<<a1.bre<<endl;
    }
};
int main(){
    alpha a1,a2,a3;
    a1.getdata();
    a2.getdata();
    a3=a1-a2;
    a3.show();
    return 0;



    
}