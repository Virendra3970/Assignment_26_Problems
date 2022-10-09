/* Define a class Cube and calculate Valume of the Cube and initialize it using constructor*/

#include<iostream>
using namespace std;
class Cube 
{
  private:
   int a;
  public:
   Cube(int b)
   {
     int v;
     v=b*b*b;
     cout<<"\nThe valume of cube is: "<<v<<endl;
   }
};
int main()
{ 
  int x;
  cout<<"\nEnter the side length of the cube: "<<endl;
  cin>>x;
  Cube c(x);
  return 0;
}

