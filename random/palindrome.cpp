//checking if a string is palindrome usig c+
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char a[100];
    int i,count,flag=0;
    cout<<"Enter the string";
    cin>>a[100];
    count=strlen(a);
    for(i=0;i<count;i++){
        if(a[i] != a[count-i-1]){
            flag=1;
            break;

        }
    }
    if(flag=1){
        cout<<a<<"It is not a palindrome";
    }
    else{
        cout<<a<<"It is a palindrome";
    }

    return 0;
    }
