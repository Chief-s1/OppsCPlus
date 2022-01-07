#include<iostream>
	using namespace std;
	class Student{
	  string NAME;
	  int Roll_no;
	  public:
	    static int count;
	 void setValue(string name,int rollno){
	  NAME=name;
	  Roll_no=rollno;
	  count++;
	 }
	 static int display(){
	 return count;
	 }
	};
	int Student::count=0;
	int main(){
	    Student obj1,obj2,obj3,obj4,obj5;
	    obj1.setValue("Swayam",99);
	      obj2.setValue("Shivam",98);
	      obj3.setValue("Ambuj",40);
	        obj4.setValue("Vansh",3);
	     cout<<"NO< OF TIMES MEMBER FUNCTION CALLED : "<<Student::count<<endl;
	        
	}
