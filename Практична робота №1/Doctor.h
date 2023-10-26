#pragma once

#include <iostream>

using namespace std;

class Doctor {
	int id;
	string surname;
	string firstName;
	string lastName;
	string address;
	string phoneNumber;
	string specialization;
public:
	Doctor();
	Doctor(int id, string surname, string firstName, string lastName, string address, string phoneNumber, string specialization);
	Doctor(const Doctor& other);
	~Doctor();
	friend istream& operator>>(istream& is, Doctor& doctor);
	friend ostream& operator<<(ostream& os, Doctor& doctor);
	bool operator==(const Doctor& other) const;
};