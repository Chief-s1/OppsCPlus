#include <iostream>
#include <string>
using namespace std ;

int main(){

    string s1;
    cout << "Enter String 1: " ;
    getline( cin, s1 ) ;
    
    string s2;
    cout << "Enter String 2: " ;
    getline( cin, s2 ) ;
    
    if( s1.length() != s2.length() ) 
    {      
        cout << "Not Equal\n" << endl ;
        return 0 ;
    }
    
    string :: iterator i1 =  s1.begin() ;
    string :: iterator i2 =  s2.begin() ;
    
    while( i1 != s1.end() )
     {
        
            if( *i1 != *i2 )
                break ;
                
           i1++ ;
           i2++ ;
     }
     
     if( i1 != s1.end() )
            cout << "Not Equal\n" << endl ;
            
     else
            cout << "Equal\n" << endl ;        

    return 0 ;
}
