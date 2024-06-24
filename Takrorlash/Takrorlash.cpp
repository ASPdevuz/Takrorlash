#include <iostream>
#include <string>
#include <list>
#include "Person.cpp"
#include "PersonService.cpp"
using namespace std;

//Hospiral - Registration
int main()
{
	string fullname, address, phone;
	int age;
	char bolim;

	PersonService service;

	for (int i = 1; i < 10; i++)
	{
		cout << "1.Registration\n2.Ro'yxatni ko'rish\n0.out";

		if (bolim == '1')
		{
			cout << "Fullname: ";
			cin >> fullname;

			cout << "Age: ";
			cin >> age;

			cout << "Address: ";
			cin >> address;

			cout << "Phone Number: ";
			cin >> phone;

			Person person(service.persons.size() + 1, fullname, age, address, phone);
			cout << "Ro'yxatga muvaffaqiyatli qo'shildi - " << service.Registration(person);
		}
		else if (bolim == '2')
		{
			Person person = service.GetPerson();

			person.Get();
		}
		else
		{
			break;
		}

	}
	return 0;
}