#include <iostream>
using namespace std;

void print_permutation(string ques,string ans)
{
  if(ques.size()==0)
  {
    cout<<ans<<"\n";
    return ;
  }
  for(int i=0;i<ques.size();i++)
  {
    char ch = ques[i];
    string lques = ques.substr(0,i);
    string rques = ques.substr(i+1);
    string roq = lques+rques;
    print_permutation(roq,ans+ch);
  }
}
int main()
{
  string s;
  cin>>s;
  print_permutation(s,"");
}