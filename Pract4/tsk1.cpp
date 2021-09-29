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

int main(void)
{
cout<<one::add(1,2)<<endl;
cout<<two::add(6.1,2.2)<<endl;
}
