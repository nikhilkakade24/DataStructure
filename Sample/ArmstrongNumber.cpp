#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num,originalnum;
    cout<<"Enter number for checking armstrong number";
    cin>>num;
    originalnum=num;
    int sum=0;
    int lastdigit;
    int cnt=0;
    
    while(num>0)
    {
        lastdigit = num%10;
        sum = sum + pow(lastdigit,3);
        num = num/10;
    }
    
    
    sum==originalnum ? cout<<"Given number is Armstrong Number":cout<<"Number is not a armstrong number";
}