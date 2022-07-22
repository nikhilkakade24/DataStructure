#include <iostream>
using namespace std;

int main()
{
  string s;
  cin>>s;
  string res="";
  cout<<'a'+25;
  for(int i=0;i<s.length();i++)
  { if((s[i]+5)<='z')
    res = res+char(s[i]+5);
    else
    {
      res = res + char(s[i]+5-26);    
    }
  }
  cout<<res;
}