/*Define a class Bill and define its member function get() to take detail of customer, calculateBill() function to calculate electricity bill using below tariff:
a . Upto 100 units Rs, 1.20 per unit 
b. From 100 to 200 unoits Rs.2 per unit 
c. Above 200 units Rs. 3 per unit*/

#include<iostream>
using namespace std;
class Bill
{
  private:
   int unit, accountNo;
   char name[20];
   float ans;
  public:
  void getBill()
  {
    cout<<"\nEnter the Consumer No(last 6 digits), Name and total number of consumed electricity(in units):"<<endl;
    cin>>accountNo>>name>>unit;
    cout<<"\nConsumer No: "<<accountNo<<"\nConsumer Name: "<<name<<"\nTotal Units: "<<unit<<endl;
  }
  void calculateBill()
  {
    if(unit<100)
    {
      ans=unit*1.20;
    }
    else if(unit >=100 && unit <200)
    {
      ans=unit*2;
    }
    else
    {
      ans=unit*3;
    }
    cout<<"\nTotal Bill is: "<<ans<<" Rs."<<endl;
  }
};
int main()
{
  Bill a1,a2;
  a1.getBill();
  a1.calculateBill();
  return 0;
}
