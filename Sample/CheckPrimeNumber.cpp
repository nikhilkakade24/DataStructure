#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num;
    cin >> num;
    //cout<<sqrt(num);
    int flag=0;
    int sq = sqrt(num);
    cout<<sq;

    for(int i=2;i<=sq;i++)
    {
        if(num%i==0)
        {
            flag =1;
            break;
        }
    }  

    flag==1 ? cout<<"Non Prime" : cout<<"Prime";

}