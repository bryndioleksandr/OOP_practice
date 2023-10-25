#pragma once

#include <string>
#include <iostream>

using namespace std;

class Patient {
	int id;
	string surname;
	string firstName;
	string lastName;
	string address;
	string phoneNumber;
	string medicalNumber;
	string diagnosis;
public:
	Patient();
	Patient(int id, string surname, string firstName, string lastName, string address, string phoneNumber, string medicalNumber, string diagnosis);
	Patient(const Patient& other);
	~Patient();
	friend istream& operator>>(istream& is, Patient& patient);
	friend ostream& operator<<(ostream& os, Patient& patient);
	bool operator==(const Patient& other) const;
};