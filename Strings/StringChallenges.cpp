#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string s ="xyzabc";
  //for converting into uppercase
  for(int i=0;i<s.length();i++)
  { if(s[i]>='a' && s[i]<='z')
    s[i]=s[i]-32; 
  }
  cout<<s<<endl;

  //for converting into lowercase
  for(int i=0;i<s.length();i++)
  {
    if(s[i]>='A' && s[i]<='Z')
    s[i]=s[i]+32;
  }
  cout<<s<<endl;

  //inbuilt function for lowercase to upper or vieversa
  transform(s.begin(),s.end(),s.begin(),::toupper);
  cout<<s<<endl;
  transform(s.begin(),s.end(),s.begin(),::tolower);
  cout<<s<<endl;

  //form the largest number by using numeric string
  //for this we have to sort the string in decreasing order of number
  string s1 = "1325467";
  sort(s1.begin(),s1.end(),greater<int>());
  cout<<s1<<endl;
  
  //find the which character has maximum occurence (i.e calculate the count and that letter)
  string s2 = "abcabzzzzas";
  int freq[26] = {0};
  
  for(int i=0;i<s2.length();i++)
  {
    freq[s2[i]-'a']++;
  }
  int max_freq = -1,j;
  for(int i=0;i<26;i++)
  {
    if(freq[i]>max_freq)
    {max_freq = freq[i];
      j = i; // j is used for storing index of maximum frquency element
    }
  }
  char ans = 'a'+j;

  cout<<"In above string char "<<ans<<" occurs maximum for "<<max_freq<<" times";

}