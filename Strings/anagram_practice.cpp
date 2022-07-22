#include <iostream>
using namespace std;

bool is_anagram(string s1,string s2)
{ int cnt[256] = {0};
  if(s1.length()!=s2.length())
  return 0;
  else
  {  
     for(int i=0;i<s1.length();i++)
     {
       cnt[s1[i]]++;
     }
     for(int i=0;i<s2.length();i++)
     {
       cnt[s2[i]]--;
       if(cnt[s2[i]]<0)
       return 0;
     }
     return 1;
  }
}

int main()
{
  string s1,s2;
  cin>>s1>>s2;
  cout<<is_anagram(s1,s2);
}