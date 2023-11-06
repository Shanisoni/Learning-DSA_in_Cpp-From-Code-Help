#include<iostream>
#include<cmath>
using  namespace std ;

int main ()
{
    // int i =16 ;

    // if (i < 10 )
    // {
    //      for (i = 0 ; i < 10 ; i ++)
    // {
    //     cout<< "shani" << endl;
    // }
    // }
    // else  { 
        
//         cout<< "sorry";
//         }
//    return 0 ;




// int n ;
// cin >> n ;
// for (n = 8 ; n <=10 ; n ++){
//     cout<< " shani" <<endl;
// }


// int i = 1 ;

// for ( ; i<5 ;) //this is change done by myself ) 
// {
//     cout<< "value of i is " << i <<endl;
//     if ( i < 5)
//     {
//         cout << "babber" << endl;
        

//     }
//     i = i + 1 ;
    // else {
    //     break;
    // }
    

 
// }
// return 0 ;
   
// 

// int a = 19 ;
// int b =1 ;
// for( b =1 ; b <= 10 ; b++)
// {
// cout << a*b <<endl;

// }
// Pattern Printing
// int i ;
// int j ;
// for ( i = 0 ; i < 4 ; i++){

//     for ( j= 0 ; j <4 ; j++){
//     cout<< "*" ; 
//     }
//     cout<< " " <<endl;
// }



// Another
 
// int row ;
// int coll;
// for ( row = 0 ; row <5 ; row++)
// {
//     for(coll=0 ; coll<5 ; coll++){
//         if(row == 0 || row == 4){
//             cout<<"*" ;
//         }
//         else{
//             if(coll == 0 || coll == 4){
//                 cout<< "*" ;
//             }
//             else{
//                 cout<<" " ;
//             }
            
//         }
//     }
// cout<<"" << endl;

// }





// Half Peramid  By Myself


// int row ;
// int coll;

// for (row = 0 ; row < 4 ; row++)
// {
//     for ( coll = 0 ; coll < 4 ; coll++){
//         if (coll == 0 ){
//             cout << "*" ;
//         }
//         else {
//             if(coll == 1 && row == 0){
//                 cout<< " ";
//             }
//             else{
//                 if(coll == 2 && row == 1){
//                     cout << " ";
//                 }
//                 else{
//                     if(coll == 3 && row == 2){
//                         cout << "" ;
//                     }
//                     else{
//                         if(row == 1 && coll == 3){
//                             cout<< "";
//                         }
//                         else{
//                             if(row == 0 ){
//                             cout<< "";}
//                             else{
//                                 cout<< "*";
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     cout<<""<<endl;
// }




// Half Peramid   Classic Method

// for ( int i=0 ; i<=10 ; i++){
    
//     for(int j = 0 ; j < i ; j ++){
//         cout << " * ";
//     }

// cout << endl ;
// }


// // Inverted Peramid

// int n ;
// cin>> n ; 
// for (int row = 0 ; row < n ; row++ ){
//     for(int col= 0 ; col< n - row ; col ++){
//     cout << " * " ; 
//     }
// cout<<endl;
// }






// int n ;
// cin >> n ; 

// for ( int row = 0 ; row < n ; row ++){
//     for (int col = 0 ; col < n - row ; col ++){
//     cout<< "*" ;
//     }



// cout<< endl;

// }


// For full peeramid






    int space, rows;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(int i = 1, k = 0; i <= rows; ++i, k = 0) {
        for(space = 1; space <= rows-i; ++space) {
            cout <<"  ";
        }

        while(k != 2*i-1) {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }    
    return 0;
}








