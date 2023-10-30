#pragma once
#include <string>
#include <iostream>

using namespace std;

class Person {
	int id;
	string surname;
	string firstName;
	string lastName;
	string address;
	string phoneNumber;
public:
	Person();
	Person(int id, string surname, string firstName, string lastName, string address, string phoneNumber);
	Person(const Person& other);
	~Person();
	friend istream& operator>>(istream& is, Person& patient);
	friend ostream& operator<<(ostream& os, Person& patient);
	bool operator==(const Person& other) const;
	virtual string toString() = 0;
};
