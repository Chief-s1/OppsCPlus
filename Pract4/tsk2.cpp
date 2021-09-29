#include<iostream>
using namespace std;
namespace one
{
int add(int a, int b)
{
return (a+b);
}

}
namespace two
{
float add (float a,float b)
{
return (a+b);
}

}
using namespace one;
using namespace two;

int main(void)
{
cout<<add(1,2)<<endl;
cout<<add(6.1f,2.2f)<<endl;
}
