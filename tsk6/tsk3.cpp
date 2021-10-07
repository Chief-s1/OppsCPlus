#include <iostream>
#include <string>
using namespace std ;

int main()
{

string s ;  
getline( cin, s ) ;   
    string rev ;
string :: iterator i ;    
    for( i = s.end(); i >= s.begin() ; i-- )
	{     
            rev.push_back( *i ) ;
        }	 
     cout << "Reverse is: " ;
     cout << rev << endl << endl ;
return 0 ;
}

