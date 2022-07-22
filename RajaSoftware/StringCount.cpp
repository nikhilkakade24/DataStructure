#include <iostream>
#include <algorithm>
using namespace std;

void freq(string input)
{
  int freq[26];
  for(int i=0;i<input.length();i++)
  {
    freq[input[i]-'a']++;
  }
    cout<<"frequency of "<<"b"<<freq['b'-'a']<<"\n";
    cout<<"frequency of "<<"f"<<freq['f'-'a']<<"\n";
    cout<<"frequency of "<<"j"<<freq['j'-'a']<<"\n";
    cout<<"frequency of "<<"p"<<freq['p'-'a']<<"\n";
    cout<<"frequency of "<<"v"<<freq['v'-'a']<<"\n";
}

int main()
{
  string s;
  cin>>s;
  freq(s);
}