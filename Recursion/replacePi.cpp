#include <iostream>
#include <string>
using namespace std;

void replacePi(string s)
{
  if(s.length()==0)
  return;
  else if(s[0]=='p' && s[1]=='i')
  { 
    //printing will be done at calling time only
    cout<<"3.14";
    replacePi(s.substr(2)); //remove 1st 2 characters from string
  }
  else
  {
    cout<<s[0];
    replacePi(s.substr(1)); //remove 1st character only
  }
}

int main()
{
  string s = "piiiippi";
  replacePi(s);
}