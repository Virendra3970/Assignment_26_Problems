//Define a class Counter and write a program to show Counter using Constructor.

#include<iostream>
using namespace std;
class Counter
{
  public:
  Counter()
  {}
  Counter(char ch[20])
  {
    cout<<"\nOutput is: "<<ch<<endl;
  }
};
int main()
{
  Counter c1={"Counter"};
  Counter c2={"Counter"};
  return 0;
}

