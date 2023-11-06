#include<iostream>
#include<cmath>
using namespace std ;


int main ()
{
    cout<< "Enter the number" << endl;
    int n; 
    int i = 1 ;
    cin>> n ; 
    while(n>=1)
    {
        i = i * n ;

        cout<< i << endl;
        n = n-1 ;
    }

  return 0 ;  
}