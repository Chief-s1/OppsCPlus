#include <time.h>
#include<iostream>
#include<cstring>
using namespace std;

void aut() 
{
char at[90],mm[5];

string ptr;
int u=0,i=0,ch;
   time_t curdate;
   time(&curdate);
  ptr=ctime(&curdate);
 strcpy(at, ptr.c_str());
   //cout<<"Current Date Using Inbuilt Function:\n"<<ctime(&curdate)
  // day mm dd tt yy 
   
   cout<<"1.Day\n2.Month\n3.Date\n4.Year\n";\
   cin>>ch;
   
   if(ch==1)
   ch=0;

else if(ch==2)
ch=4;
     
     else if(ch==3)
     ch=8;
else if(ch==4)
ch=19;
   


   
   for(i=ch;(*(ptr+i)!=' ' || *(ptr+i))!=NULL;i++)
   {
   mm[u]=at[i];
   u++;
   }
mm[u]='\0';  
   
   cout<<mm;
}

void man()
{
cout<<"Current Date Using Manual Function:\nYear =2021 Month=10 Date=13";
}

int main(void)
{
int ch;
cout<<"1.Inbuilt Function\n2.Manual Function\n";
cin>>ch;
switch(ch)
{
case 1:
aut();
break;

case 2:
man();
break;

default:
cout<<"Invalid!!!!1\n";
}

}


// day mm dd tt yy 



