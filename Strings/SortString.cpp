#include <iostream>
using namespace std;

int main()
{
  string s;
  int freq[26]={0};
  cin>>s;
  for(int i=0;i<s.length();i++)
  {
    freq[s[i]-'a']++;
  }
  for(int i=0;i<26;i++)
  {
     for(int j=0;j<freq[i];j++)
      cout<<char(i +'a')<<" ";
    
  }
  
}