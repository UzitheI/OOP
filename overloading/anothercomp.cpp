#include<iostream>
using namespace std;
class Home{
    int a,b;
    public:
    void getdata(){
        cout<<"Enter the value of a and b:"<<endl;
        cin>>a>>b;
    }
    Home operator >(Home h2){
        int f,s;
        f=a+b;
        s=h2.a+h2.b;
        if(f>s){
            cout<<f<< "is greater than "<<s<<endl;
        }
        else{
            cout<<s<<" is greater than "<<f<<endl;
        }
    }
};
int main(){
    Home h1,h2;
    h2.getdata();
    h1.getdata();
    h1>h2;
    return 0;
}