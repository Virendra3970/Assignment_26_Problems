//Define a class Box and write a program to enter length,breadth and height and initialize objects using constructor and define membe rfunctions to calculate the valume and area.
#include<iostream>
using namespace std;
class Box
{
  private:
   int l,b,h;
  public:
  Box()
  {//cout<<"DC called"<<endl;}
  Box(int a,int i,int c)
  {
    //cout<<"PC called"<<endl;
    l=a; b=i; h=c;
  }
  int Valume()
  {
    //cout<<"Valume Function  called"<<endl;
    return l*b*h;
  }
  int Area()
  {
    //cout<<"Area Function called"<<endl;
    return l*b+b*h+h*l;
  }
};
int main()
{
  int m,n,o;
  cout<<"\nEnter the length, beadth and height of box: "<<endl;
  cin>>m>>n>>o;
  Box b1={m,n,o};
  cout<<"\nValume is: "<<b1.Valume()<<endl;
  cout<<"\nArea is:"<<b1.Area()<<endl;
  return 0;
  
}
