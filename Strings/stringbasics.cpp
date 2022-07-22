#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int stoi1(string s1)
{
 int res = 0;
 for(int i=0;i<s1.length();i++)
 {
   res = (res *10) + (s1[i]-'0');
 }
 return res;
}

int main()
{
  string s ="abcde";
  string s1 = "53";

  int cnt =5;
  string ans = s+char(cnt+48);
  int c = cnt + stoi1(s1);
  //cout<<c;
  char b = '0';
  cout<<char(b+1)<<endl;

  string sample = "bdvgaabb";
  int freq[26] = {0};
  for(int i=0;i<sample.length();i++)
  {
    freq[sample[i]-'a']++;
  }
  for(int i=0;i<26;i++)
  {
    for(int j=0;j<freq[i];j++)
    {
      cout<<char('a' + i);
    }
  }
  string s2 ="csxjd123Ab";
  sort(s2.begin(),s2.end());
  cout<<"\n"<<s2;

}