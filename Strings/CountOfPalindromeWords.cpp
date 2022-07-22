#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int reverse(string word);
void to_lower(string &word);
int palindrome(string s)
{ int cnt = 0;
  s = s + " "; //add one extra space at end for taking last word
  string word = "";
  int i=0;
  while(i!=s.size())
  {
   while(s[i] != ' ')
   { word+=s[i];
   
     i++;
   }
  
  //transform(4 parameters)  present in algorithm is used for converting lowercase 
  //to_lower(word);
  transform(word.begin(),word.end(),word.begin(), ::tolower);
  //cout<<word<<" ";
  if(reverse(word))
  {
    cnt++;
  }
  
  i++;
  word = "";
 }
  
 return cnt;
}
void to_lower(string &word)
{
  for(int i=0;i<word.length();i++)
  {
    if(word[i]>='A' && word[i]<='Z' )
    {
      word[i] += 32;
    }
  }

}

//for checking palindrome
int reverse(string word)
{ int flag = 1;
  for(int i=0,j=word.size()-1 ;i<=j ;i++,j--)
  { 
    if(word[i]!=word[j])
    {
      flag=0;
      break;
    }

  }

  return flag;
}

int main()
{
  string s ="Hi Madam I am NAYAn and my 121";
 cout<<"No of palindrome words are: "<<palindrome(s);
 //cout<<s.length();
}


