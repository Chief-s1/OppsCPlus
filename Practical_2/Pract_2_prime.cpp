#include<iostream> 
#include<math.h>
using namespace std;
int ispri(int n)
{
for(int i=2;i<=sqrt(n);i++)
{
if(n%i==0)
return 0;
}
return 1;
}
int main()
{
int n;
cout<<"Enter a number"<<endl;
cin>>n;
if(ispri(n))
cout<<"Entered Number Is Prime\n";
else
cout<<"Number is not prime\n";

return 0;
}