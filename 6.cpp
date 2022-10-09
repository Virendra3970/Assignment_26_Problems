//Define a standard student and write a program to enter student details using constructor and defone a member dunction to display all the details.
#include<iostream>
#include<string.h>
using namespace std;
class student
{
  private:
   int rollNo; 
   int standard;
   char name[20];
  public:
    student()
    {  cout<<"DC called"<<endl; }
    student(const student &p)
    {
      cout<<"CC called"<<endl;
      rollNo=p.rollNo;
      standard=p.standard;
      strcpy(name,p.name);
    }
    student(int r, int c, char n[20])
    {
      cout<<"PC called"<<endl;
      rollNo=r;
      standard=c;
      strcpy(name,n);
    }
    void display()
    { 
      cout<<"Display Function called"<<endl;
      cout<<"student details: "<<endl;
      cout<<"Name: "<<name<<endl<<"standard: "<<standard<<endl<<"Roll No: "<<rollNo<<endl;
    }
};
int main()
{
  student s1={12,10,"Alok"},s2;
  s2=s1;
  s1.display();
  s2.display();
  return 0;
}

