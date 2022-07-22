#include <iostream>
#include <string>
using namespace std;

int main()
{ string s(4,'A'); //it will print four chars with A
  cout<<s<<"\n";
  string s1="abcdefg";
  string s2 ="abcefghijkl";
  // getline is used for taking multiple words strings
  //getline(cin,s1);
    //s1.clear(); it will clear contents from string
  cout<<s1<<endl;
  cout<<s1+s2<<endl; 
  cout<<s1[2]<<endl; 
  cout<<s2.compare(s1)<<endl;
  //s2.clear();
 (s2.empty()) ? cout<<"String is empty":cout<<"String is not empty";
 cout<<endl;
 s1.erase(3,3); // in erase first argument is starting index and from that how many charcters you want to delete should be second argument
 s1.erase(3); //it will delete all the charcters from 3rd index onwards
 cout<<s1;

 //find func will return the first index of substring
 cout<<"\n"<<s2.find("cef")<<endl;

 //insert function will insert string from specified index
 string s3 = "abcd";
 s3.insert(s3.length(),s1);
 cout<<"s3 after insert will be "<<s3<<endl;
 cout<<"Lenght of s1 string is: "<<s1.length()<<" "<<s1.size()<<endl;
 
 //check whether string contains unique character or not
 bool char_set[2];
 for(int i=0;i<2;i++)
 {
   cout<<char_set[i]<<" ";
 } 

}