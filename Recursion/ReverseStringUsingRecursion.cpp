#include <iostream>
#include <string>
using namespace std;

void reverse(string s)
{ if(s.length()==0)
  return;
  else
  { string rest_of_str = s.substr(1); //it will take string 1 onwards;
    reverse(rest_of_str);
    cout<<s[0];
  }

}

int main()
{ string s;
  cout<<"\nEnter string: ";
  cin>>s;
  reverse(s); 
}