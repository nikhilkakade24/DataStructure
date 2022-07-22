#include <iostream>
using namespace std;

int pow(int n,int p)
{

  if(p==0)
  return 1;
  else
  { 
    return pow(n,p-1) * n;  
  }
}

int main()
{
  int n = 2,p= 4; //2^4
  cout<<"\nThe 4th power of number is :"<<pow(n,p); 
}