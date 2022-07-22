#include <iostream>
using namespace std;

void tower_of_hanoi(int n,int A,int B,int C)
{ if(n>0)
  {
    tower_of_hanoi(n-1,A,C,B);
    cout<<"( "<<A<<" to "<<C<<" )"<<endl;
    tower_of_hanoi(n-1,B,A,C);
  }
}

int main()
{
  int n = 3;//no of disks
  tower_of_hanoi(n,1,2,3); //1,2,3 are tower number
}