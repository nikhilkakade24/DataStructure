#include <iostream>
using namespace std;

string remove(string s)
{
  if(s.length()==0)
  return "";
  else
  {
    char ch = s[0];
    string ans = remove(s.substr(1));
    if(ch=='x')
    {
      return ans + ch; 
    }
    else
    {
      return ch + ans;
    }
  }
}

int main()
{
  string s ="asdxfxe";
  cout<<remove(s);
}