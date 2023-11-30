#include<iostream>
using namespace std;
class Home{
    private:
    int a;
    protected:
    int c;
    public:
    int b;
    void getdata(){
        cout<<"Enter the value of a:"<<endl;
        cin>>a;
        cout<<"Enter the value of b:"<<endl;
        cin>>b;
        cout<<"Enter the value of c:"<<endl;
        cin>>c;
    }
    void showdata(){
        cout<<a<<b<<c;
    }



};
int main(){
    Home h1;
    h1.getdata();
    cout<<h1.b<<endl;
    h1.showdata();
    return 0;
}