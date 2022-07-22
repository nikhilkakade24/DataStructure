#include <iostream>
#include <string>
using namespace std;

int main()
{   string s1 = "-234";
    //string s2 ="29";
    
      
      
        int i;
        int temp=0;
        for(i=0;i<s1.length();i++)
        {  
            // str[i]-'0' convert char into int
            if(s1[i]>='0' && s1[i]<='9')
            {
             temp = (temp*10) + (s1[i]-'0');
                
            }  
        }
        if(s1[0]!='-')
        cout<<temp;
        else
        cout<<-temp;

}