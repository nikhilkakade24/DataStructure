#include <iostream>
using namespace std;

int mul(int x,int y)
{
  return y==0 ? 0 : x + mul(x,y-1);

}
int main()
{
  int op1 = 6,op2= 3;
  cout<<mul(op1,op2);
}