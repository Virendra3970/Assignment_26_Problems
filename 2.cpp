/* Define a class Time to represent a time with instance variables h,m and s to store hour,minute and second. Also define following member functions.
  a. void setTime(int,int,int)
  b. void showTime()
  c.void normalize()
  d. Time add(Time)
*/
#include<iostream>
using namespace std;
class Time 
{
  private:
   int h,m,s;
  public:
   void setTime(int a,int b,int c)
   {
     h=a; m=b; s=c;
   }
   void showTime()
   {cout<<"\n"<<h<<" : "<<m<<" : "<<s<<endl;}
   Time add(Time t)
   {
     Time temp;
     temp.h=h+t.h;
     temp.m=m+t.m;
     temp.s=s+t.s;
     return temp;
   }
   
   void normalize()
   {
     if(s>=60)
     {
       int i;
       i=s/60;
       s%=60;
       m+=i;
     }
     if(m>=60)
     {
       int j;
       j=m/60;
       m%=60;
       h+=j;
     }
   }
};
int main()
{
  Time t1,t2,t3;
  t1.setTime(4,50,45);
  t1.showTime();
  t2.setTime(3,10,35);
  t2.showTime();
  t3=t1.add(t2);
  t3.normalize();
  t3.showTime();
  return 0;
}
