//Define a class Bank and define member functions to read principle, rate of intrest and year. Another member Function to calculate simple intrest and display it. Initialize all details using constructor.
#include<iostream>
using namespace std;
class Bank
{
  private: 
  int p,r,y;
  float ans;
  public:
  Bank()
  {
    cout<<"\nEnter principal, rate and year time "<<endl;
    cin>>p>>r>>y;
  }
  Bank(int a, int b, int c)
  {
    p=a; r=b; y=c;
  }
  void simpleIntrest()
  {
    ans= (p*r*y)/100;
  }
  void display()
  {
    cout<<"\nSimple Intrest is: "<<"Rs."<<ans<<endl;
  }
};
int main()
{
  Bank p1,p2={10000,12,3};
  p1.simpleIntrest();
  p2.simpleIntrest();
  p1.display();
  p2.display();
  return 0;
}
