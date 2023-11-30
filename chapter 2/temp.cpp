#include<iostream>
using namespace std;
template <class T>
T maxi(T a, T b){
	if(a>b){
		cout<<a<<" is greater than "<<b<<endl;
	}
	else{
		cout<<b<<" is greater than "<<a<<endl;
	}
}
int main(){
	int a=4,b=6;
	maxi(a,b);
	float d=5.4,e=3.4;
	maxi(d,e);
}