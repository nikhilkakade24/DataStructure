#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int l_search(int arr[],int key)
{
  
  for(int i=0;i<26;i++)
  {
    if(arr[i]==key)
    return i;
  }
}

string sort_freq(string s)
{
  int freq[26]={0};
  int freq1[26];
  for(int i=0;i<s.length();i++)
  { 
    freq[s[i]-'a']++;
  }
  for(int i=0;i<26;i++)
  {
    freq1[i] = freq[i]; 
  }
  sort(freq,freq+26,greater<int>());
  for(int i=0;freq[i]!=0;i++)
  {
    int idx = l_search(freq1,freq[i]);
    int cnt= freq[i];
    for(int i=0;i<cnt;i++)
    {
      cout<<char(idx+'a');
    }
  }
}

void maximum_occ(string s)
{
  int freq[26]={0};
  for(int i=0;i<s.length();i++)
  {
    freq[s[i]-'a']++;
  }
  int max=-1,j;
  for(int i=0;i<26;i++)
  {
    if(freq[i]>max)
    {
      max = freq[i];
      j = i;
    }
  }
  cout<<"\nCharacter "<<char('a'+j)<<" occurs maximum for "<<max<<" times "<<endl;

}

int main()
{
  string s;
  cin>>s;
  //maximum_occ(s);
  cout<<sort_freq(s); 

}