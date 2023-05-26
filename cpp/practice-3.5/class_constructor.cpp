/*
Question: Create three static objects with the help of the constructor of the following class.
Student
{
	name;
	roll;
	section;
	math_marks;
	cls;
}
Then compare those 3 objects and print who got the highest math_marks and print his/her name.

*/
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        char name[1001];
        int roll;
        char section;
        int math_marks;
        int cls;    
        Student(char* n,int r,char s,int m,int c){
            strcpy(name,n);
            roll=r;
            section=s;
            math_marks=m;
            cls=c;
        }
};
int main(){
    char a_name[1001]="Rahim";
    char b_name[1001]="Karim";
    char c_name[1001]="kamal";
    Student a(a_name,1,'A',100,10);
    Student b(b_name,1,'A',200,10);
    Student c(c_name,1,'A',300,10);
    int mx=max(max(a.math_marks,b.math_marks),max(a.math_marks,c.math_marks));
    if(mx==a.math_marks)cout<<a.name;
    else if(mx==b.math_marks)cout<<b.name;
    else if(mx==c.math_marks)cout<<c.name;
    return 0;
}