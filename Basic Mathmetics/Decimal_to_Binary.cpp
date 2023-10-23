#include<iostream>
using namespace  std;
int main ()
{
    int n ;
    cin >> n ;
    while(n>0){
        int a = n % 2 ;
        cout << a ; 
        n = n / 2 ;
      
    } 
 return 0 ;
}