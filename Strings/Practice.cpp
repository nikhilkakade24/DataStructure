#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string compressed(string s)
{
  sort(s.begin(),s.end());
  cout<<s<<endl;
  string compreesed_str=""; 
  int count = 0;
  for(int i=0;i<s.length();i++)
  {
    count++;
    if(s[i]!=s[i+1] || (i+1)==s.length())
    {
      compreesed_str = compreesed_str + s[i] +char(count +'0');
      count = 0 ;

    }
  }
  cout<<s.length()<<" "<<compreesed_str.length()<<endl;
 return compreesed_str.length() < s.length() ?  compreesed_str : s ;
}

void urlify(string s)
{ int cnt_spaces=0;
  for(int i=0;i<s.length();i++)
  { 
    if(s[i]==' ')
    {
      cnt_spaces++;
    }
  }
  int new_length = s.length() + (2*cnt_spaces); 
  char str[new_length];
  str[new_length] = '\0';
   int i = s.length()-1;
   int j = new_length -1;
   while(i>=0)
   {
     str[j] = s[i];
     j--;
     i--;
     if(s[i]==' ')
     {
       str[j] = '0';
       str[j-1] = '2';
       str[j-2] = '%';
       j = j-3;
       i--;
     }
   }

   for(int i=0;i<new_length;i++)
   {
     cout<<str[i];
   }
}
void replace_alternate(string str)
{
  string ans = "";
  string word = "";
  int i=0,cnt=1;;
  while(i<str.length())
  { while(str[i]!='.' && i<str.length())
    {
      word += str[i];
      i++;
    }
    if(cnt%2!=0 && i<str.length())
    {
      ans = ans + word + "."; 
      i++;
      word = "";
      cnt++;
    }
    else if(i<str.length())
    {
      ans = ans + "abc.";
      i++;
      word = "";
      cnt++;
    }

    
  }
  
  cnt %2 != 0 ?  ans+= word : ans += "abc";
  cout<<ans;
}
void sort_string(string str)
{
  int freq[26] = {0};
  for(int i=0; i<str.length() ;i++)
  { 
     freq[str[i]-'a']++;
  }
  for(int i=0;i<26;i++)
  {
    for(int j=0;j<freq[i];j++)
    {
      cout<<char(i+'a')<<" ";
    }
  }
}
string int_to_str(int n)
{
  int num = n,cnt=0,rem;
  while(n>0)
  {
    n = n/10;
    cnt++;
  }
  int i=0;
  string str="";
  while(num>0)
  {
    rem = num%10;
    str = str + char(rem + '0') ;
    num = num /10;
    i++;
  }
  reverse(str.begin(),str.end());
  cout<<str;

}
bool is_anagram(string s1,string s2)
{
   int cnt[256] = {0};
   if(s1.length()!=s2.length())
   {
     return false;
   }
   else
   {
     for(int i=0;i<s1.length();i++)
     {
       cnt[s1[i]]++;
     }
     for(int j=0;j<s2.length();j++)
     {
       cnt[s2[j]]--;
       if(cnt[s2[j]]<0)
       return false;
     }
     return true;
   }
}

int main()
{
  // string str;
  // cin>>str;
  // getline(cin,str); for sentence
  //  string s="Today.is.indias.independence.day.happy.India";
  //cout<<compressed(s);
 // urlify(str);
  //replace_alternate(str);
  //sort_string(str);
  // int num;
  // cin>>num;
  // int_to_str(num);

  string s1,s2;
  cin>>s1>>s2;
  cout<<is_anagram(s1,s2);
  
}