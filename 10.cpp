//Define a class StaticCount and create a static variable. Increment this variable in a function and call this 3 times and display the result.

#include<iostream>	
using namespace std;
class StaticCount
{
   public:
   static int x;
};
int StaticCount ::x;
 int main()
{
  int i;
  StaticCount i1;
  cout<<"\nEnter a number: "<<endl;
  cin>>i;
  i1.x=i;
  cout<<"Inrement value is: "<<++i1.x<<endl;
  cout<<"Inrement value is: "<<++i1.x<<endl;
  cout<<"Inrement value is: "<<++i1.x<<endl;
  return 0;  
}

