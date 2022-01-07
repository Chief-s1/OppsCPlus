#include<iostream>
	#include<string.h>
	using namespace std;
	

	class student{
	string name;
	int marks;
	char sec;
	public:
	student(string name,int m,char sec)
	{
	this->name=name;
	this->marks=m;
	this->sec=sec;
	}
	friend int get_marks(student);
	};
	

	int get_marks(student obj)
	{
	return obj.marks;
	}
	
	int main()
	{
	student obj1("Swayam",90,'A');
	student obj2("Shivam",84,'B');
	student obj3("Ambuj",78,'B');
	int sum=0;
	sum+=get_marks(obj1);
	sum+=get_marks(obj2);
	sum+=get_marks(obj3);
	cout<<"total sum of all students marks : "<<sum<<endl;
	}
