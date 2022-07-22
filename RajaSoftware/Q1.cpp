#include <iostream>
#include <algorithm>
using namespace std;

void alternateWords(string s)
{
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
 
int main()
{
  string s;
  cin>>s;
  bool x = uniqueCharacters(s);
  
}


string compressed(string str)
{ string compressedString="";
  int countConsecutive = 0;

  for(int i=0;i<str.length();i++)
  { countConsecutive++;
    if(i+1==str.length() || (str[i]!=str[i+1]))
    {
      compressedString = compressedString + str[i] + char('0'+countConsecutive);
      countConsecutive = 0;
    }
  }
  
  return (compressedString.length()>str.length()) ? str : compressedString;

void func()
{
  for(int n=100;n<=500;n++)
  {
    if(n%7==0)
    cout<<"Cool";
    else if(n%11==0)
    cout<<"Dude";
    else if(n%7==0 && n%11==0)
    cout<<"Cool Dude";
    else
    cout<<n;
    cout<<"\n";
  }
}

void func(int arr[])
{ int n = sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<n;i++)
  {
    if(arr[i]%5==4)
    cout<<arr[i];
  }
}

void freq(string input)
{
  int freq[26];
  for(int i=0;i<input.length();i++)
  {
    freq[input[i]-'a']++;
  }
    cout<<"frequency of "<<"b"<<freq['b'-'a'];
    cout<<"frequency of "<<"f"<<freq['f'-'a'];
    cout<<"frequency of "<<"j"<<freq['j'-'a'];
    cout<<"frequency of "<<"p"<<freq['p'-'a'];
    cout<<"frequency of "<<"v"<<freq['v'-'a'];
}

void second_max(int arr[])
{
 int first = second = INT_MIN;
    for (i = 0; i < arr_size; i++) {
        
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        }
 
       
        else if (arr[i] > second && arr[i] != first)
            second = arr[i];
    }
   int small = INT_MAX;
   for(int i=0;i<arr_size;i++)
   {
      if(arr[i]<small)
      small = arr[i];
   } 
  cout<<"Second max differernce is"<<(second - small);
}