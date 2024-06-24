#include<iostream>
#include<string>
#include<list>
#include "Person.cpp"

using namespace std;

class PersonService {
public:
	list<Person> persons;

	string Registration(Person newPerson)
	{
		persons.push_back(newPerson);
		return newPerson.PhoneNumber;
	}

	Person GetPerson()
	{
		for (auto person : persons)
		{
			return person;
		}
	}
};