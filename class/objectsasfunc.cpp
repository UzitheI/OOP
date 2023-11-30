#include<iostream>
using namespace std;
class height{
    private:
    int feet;
    int inches;
    public:
    void getdata(){
        cout<<"Enter feet:"<<endl;
        cin>>feet;
        cout<<"Enteer inches:"<<endl;
        cin>>inches;
    }
    void addheight(height h1, height h2){
        inches=h1.inches+h2.inches;
        feet=inches/12;
        inches=inches%12;
        feet+=h1.feet+h2.feet;

    }
    void show(){
        cout<<"feet:"<<feet<<" inches:"<<inches<<endl;
    }
};
int main(){
    height h1;
    h1.getdata();
    height h2;
    h2.getdata();
    height h3;
    h3.addheight(h1,h2);
    h3.show();
    return 0;
}