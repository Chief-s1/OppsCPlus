#include<iostream>
	using namespace std;
	class student{
	public:
	int roll_no;
	long int phone_no;
	string address;
	};
	int main(){
	student Sam,John;
	Sam.roll_no=41;
	Sam.phone_no=42123180;
	Sam.address="Mokhampur dehradun";
	John.roll_no=58;
	John.phone_no=3123738;
	John.address="Rajpur dehradun";
	cout<<"The details of Sam are :"<<" Roll no: "<<Sam.roll_no<<" Phone no. : "<<Sam.phone_no<<" Address : "<<Sam.address;
	cout <<endl;
	cout<<"The details of John are :"<<" Roll no: "<<John.roll_no<<" Phone no. : "<<John.phone_no<<" Address : "<<John.address;
	}
