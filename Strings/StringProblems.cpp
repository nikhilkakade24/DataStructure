 #include <iostream>
 #include <string>
 using namespace std;
 // it is used for checking whether string has unique characters or not
bool is_unique(string s)
{
  if(s.length()>128)
  return false;
  bool char_set[128]={0};
  for(int i=0;i<s.length();i++)
  {
    int val = s[i];
    if(char_set[val]==1)
    {return 0;}
    else{
      char_set[val]=1;
    }
  }
  return 1;
}
//it used for compressing the given string
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
  //take minimum lenght string out of original and compressed string
  return (compressedString.length()>str.length()) ? str : compressedString;

} 
 int main()
 {
   
   string s = "abc1112";
   cout<<is_unique(s)<<endl;
   //
   string str = "abbccccd";
   //compressed string of str will become a2b1c4a3
   string ans=compressed(str);
   cout<<"the compressed string of given string is: "<<ans;

 
 }