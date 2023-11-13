#include<fstream>
using namespace std;
int main(){
    ofstream outf;
    outf.open("myfile.txt");
    outf<<"Hello world"<<endl;
    
}