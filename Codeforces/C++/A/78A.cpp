#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


int main()
{
   string s;
   int scount = 0;
   int i, size;
   int vowel = 0;
   bool condition = true;
   while (scount<3 && condition)
   
   {
       getline (cin,s);
       size = s.length();
       
       for (i=0 ; i< size ; i++)
       {
           if(s[i] == 'u'||s[i] == 'a' || s[i] == 'i'||s[i] == 'o'||s[i] == 'e')
           {
               vowel++;
           }
       }
       if(vowel ==5 && (scount == 0 || scount == 2) )
           condition = true;
           
           
       else if ( vowel == 7 && scount == 1)
           condition = true;
           else { condition = false; }
       scount++;
       vowel = 0;
   
   }
            if (condition)
                {cout << "YES";}
                else { cout << "NO"; }
            
            
            
            
    return 0;
}