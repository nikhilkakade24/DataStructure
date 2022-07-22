#include <iostream>
using namespace std;

int main()
{
  string s="Today.is.indias.independence.day.happy.India";
  //replace alternate words by abc
  string ans="";
  string word="";
  int i=0,cnt=1;
   
  while(i<s.length())
  {
    while(s[i]!='.' && i<s.length())
    {
      word+=s[i];
      i++;
    }
    if(cnt%2!=0 && i<s.length())
    {
      ans = ans + word +".";
      cnt++;
      i++;  
      word="";
    }
    else if(i<s.length())
    {
      ans = ans +"abc."; 
      cnt++;
      i++;
      word="";
    }
    
  } 
  if(cnt%2!=0)
  ans = ans + word;
  else
  {
    ans = ans + "abc";
  }
  cout<<ans;
}