#include <iostream>
#include <stack>
using namespace std;


void reverse(string s)
{  
  string word="";
  string res="";
  stack<string> st;
  for(int i=0;i<s.length();)
  {
    if(s[i]==' ')
    { st.push(word);
      i++;
      word=""; 
    }
    else
    {
      word+=s[i];
      i++;
    }
  }
  st.push(word);
  while(!st.empty())
  {
    res= res + st.top() + ' ';
    st.pop();
  }
  cout<<res;
}

int main()
{
  string s = "1Hi I am Nikil and how are you";
  reverse(s);
}
