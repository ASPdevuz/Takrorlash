#include<iostream>
#include<string>

using namespace std;

class Person {
public: 
	int Id;
	string Fullname;
	int Age;
	string Address;
	string PhoneNumber;

	Person()
	{
		Id = 1;
		Fullname = "Abdulvosid Foziljonov";
		Age = 19;
		Address = "Fergana region Margilan city";
		PhoneNumber = "+998945666964";
	}

	Person(int id, string fullname, int age, string address, string phone)
	{
		Id = id;
		Fullname = fullname;
		Address = address;
		Age = age;
		PhoneNumber = phone;
	}

	void Get()
	{
		cout << "Id: " << Id << " Fullname: " + Fullname << " Age: " << Age <<
			" Address: " + Address << " Phone Number : " + PhoneNumber << endl;
	}
};