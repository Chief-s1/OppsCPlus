#include <iostream>
using namespace std ;

int rev( string s )
{

    int len = s.length();
    for( int i = 0; i < len/2; i++ )
{
        
        if( s[ i ] != s[ len -1 - i ] )
        return 0 ;
}

    return 1;
}

int main(){

    string str  ;
    getline( cin, str ) ;
    
    int ans = rev( str ) ;
if(ans)
    cout <<"Palindrome string" << endl ;
else
cout<<"Not Palindrome \n";
    return 0 ;
}
