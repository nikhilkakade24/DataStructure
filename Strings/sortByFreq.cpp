#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int search1(int a[],int key);
string sort_by_freq(string s)
{
  int freq[26]={0};
  int freq1[26] = {0};
  string ans="";
  for(int i=0;i<s.length();i++)
  {
    freq[s[i]-'a']++;
  } 
  // freq1 array is used for storing the original frequency array (copy of freq array)
  for(int i=0;i<26;i++)
  {
    freq1[i] = freq[i];
  }
  sort(freq,freq+26,greater<int>()); //we sort freq array in descending order
  for(int i=0;freq[i]!=0;i++) //freq[i]!=0 is used becoz here we have to search for only non zero elements
  {
    int idx =search1(freq1,freq[i]);
    int cnt = freq[i];
    for(int j=0;j<cnt;j++)
    {
       ans = ans + char(idx + 'a');
    }
  }
  return ans;
}
int search1(int a[],int key)
{
  for(int i=0;i<26;i++)
  {
    if(a[i]==key)
    return i;
  }
 return -1;
}

int main()
{
  string s = "aabcccddddcd";
  cout<<sort_by_freq(s);
  //to_lower(s);
  //cout<<compressed(s);
 // cout<<stoi(s)<<" ";
 
 
}