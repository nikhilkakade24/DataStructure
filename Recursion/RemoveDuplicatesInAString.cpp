#include <iostream>
using namespace std;

string remove_duplicates(string s)
{ if(s.length()==0)
  return "";
  else
  { char ch = s[0];
    string ans = remove_duplicates(s.substr(1));
    if(ans[0]==ch)
    return ans;
    else
    {
      return ch + ans;
    }
  }
}

int main()
{
  string s = "aaabbcddeefd";
  cout<<remove_duplicates(s); 
}