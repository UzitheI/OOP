#include<iostream>
using namespace std;
class size3{
    int f;
    int i;
    public:
    size3(){

    }
    size3(int feet, int inches){
        f=feet;
        i=inches;
    }
    size3 operator +(size3 s2){
        size3 s1;
        s1.i=i+s2.i;
        s1.i=s1.i%12;
        s1.f=s1.i/12;
        s1.f+=f+s2.f;
        cout<<s1.f<<","<<s1.i<<endl;
    }
};
int main(){
    size3 s2(4,5);
    size3 s1(5,6),s3;
    s3=s1+s2;
    return 0;
}