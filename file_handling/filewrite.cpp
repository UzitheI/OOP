#include<iostream>
#include<fstream> //Assume file student.txt
using namespace std; //1. no of student (count)
int main(){ //2. for n

fstream infile; // input file name
fstream outfile; // output filepercentage sane
int i, count, percentage;
char name[20];
cout<<"Enter count:"<<endl;
cin>>count;

//open for read mode

infile.open("student.txt",ios::in);
if(infile.fail())// if operation failed.
{

cout<<"Error: student.txt open fail";
exit(1);

}

//open next file for write
outfile.open("student1.txt",ios::out);
if(outfile.fail())
{ cout<<"Error:......"; exit(1);
}
infile>>count; // no of student
outfile<<" student Information processing" <<endl;
outfile<<" ------------------------------" <<endl;

for(i=0; i<count; i++)
{ // Read data percentage from input file

infile>>name;
infile>>percentage;

// write in output file.
outfile<<"Name:"<<name<<endl;
outfile<<"precentage:"<<percentage<<endl;
outfile<<"passed in:";
if(percentage>=75)

outfile<<"first Division/distinction";

else if(percentage>=45)

outfile<<" Second Div";

else if(percentage>=35)
outfile<<"Passed";

else
outfile<<"Failed";
outfile<<endl;
outfile<<"....................."<<endl;

}

// close files;

infile.close();
outfile.close();

}