//Define a class Complex to represent a complex number with instance variables a and b to store real and imaginary parts. Also define following member functions:
/*
a. void setData(int,int)
b. void showData()
c. Complex add(Complex)
*/
#include<iostream>
using namespace std;
class Complex
{
 private:
  int real;
  int img;
 public:
  void setData(int x,int y)
  {real=x; img=y;}
  void showData()
  {cout<<real<<"+"<<img<<"i"<<endl;}
  Complex add(Complex c)
  {
     Complex temp;
     temp.real=real+c.real;
     temp.img=img+c.img;
     return temp;
  }
};
int main()
{
  Complex c1,c2,c3;
  c1.setData(7,4);
  c1.showData();
  c2.setData(5,3);
  c2.showData();
  c3=c1.add(c2);
  c3.showData();
  return 0;
}
