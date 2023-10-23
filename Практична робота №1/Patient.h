#pragma once

#include <string>

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
};