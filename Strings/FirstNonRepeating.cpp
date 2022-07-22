#include <iostream>
#include <algorithm>

using namespace std;
char non_Re(string s)
{  //transform(s.begin(),s.end(),s.begin(),::tolower);
   int freq[26]={0};
   for(int i=0;i<s.length();i++)
   {
     freq[s[i]-'a']++;
   }
   for(int i=0;i<s.length();i++)
   { 
     if(freq[s[i]-'a']==1)
     return s[i];
   }
   
  //  for(int i=0;i<s.length();i++)
  // { 
  //   if(freq[s[i]-'a']==0)
  //   { cout<<s[i];
  //     return s[i];
  //   }

  // }
  
}

int main()
{ //GeeksforGeeks
  string s;
  cin>>s;
  cout<<non_Re(s);
}