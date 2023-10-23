#include<iostream>
#include<cmath>
using namespace  std;
int main ()
{
//     int n ;
//     cin >> n ;
//     while(n>0){
//         int a = n % 2 ;
//         cout << a ; 
//         n = n / 2 ;
      
//     } 
//  return 0 ;

int n ;
cin >> n ; 
int binary = 0 ; 
int i = 0 ; 
 while( n > 0 ) {
    int bit = n & 1 ;
    binary = bit*pow(10, i++) + binary ;
    cout << binary << endl ;
    n = n >> 1 ; 

 }


 return 0 ;
}