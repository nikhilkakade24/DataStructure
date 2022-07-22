#include <iostream>
using namespace std;
int main()
{
    int num,num1;
    cout<<"Enter number which is to be reversed";
    cin>>num;
    num1=num;
    int reverseno=0;
    int lastdigit;
    while(num>0)
    {   lastdigit = num%10;
        reverseno = (reverseno * 10) + lastdigit;
        num = num/10;
    }
    cout<<"Reverse Number of"<<num1<<" is "<<reverseno;
}
