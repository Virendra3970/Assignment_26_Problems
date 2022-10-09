//Define a class Date and write a program to display date and initilize date object using Constructor.

#include<iostream>
using namespace std;
class Date
{
  private:
   int d,m,y;
  public:
  Date(int a,int b,int c)
  {
    cout<<a<<"/0"<<b<<"/"<<c<<endl;
  }
};
int main()
{
  Date d(20,9,2022);
  return 0;
}
