#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>


using namespace std;

int check(int x[],int m,int o);

int main ()
{
    int n, k;//all participants =n k = last score
    int nparticipants = 0;//nparticipant = number of participants to next round
    int i;//counter
    int array1[50];
    cin >> n >> k ;
     for (i=0 ;i<n ;i++)
     {
         cin >> array1[i] ;
     }
     nparticipants = check(array1, n-1, k);
     cout << nparticipants ;

     return 0;
}

int check(int x[],int m,int o){

    if(m== -1)
        return 0;
        
        if(x[o-1]<= x[m] && x[m] !=0)
            return 1 + check(x,m-1,o);
            
            return check(x,m-1,o);
    
}