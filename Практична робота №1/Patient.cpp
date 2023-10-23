#include "Patient.h"

Patient::Patient() : id(0), surname(""), firstName(""), lastName(""), address(""), phoneNumber(""), medicalNumber(""), diagnosis("") {}

Patient::Patient(int id, string surname, string firstName, string lastName, string address, string phoneNumber, string medicalNumber, string diagnosis) {
	this->id = id;
	this->surname = surname;
	this->firstName = firstName;
	this->lastName = lastName;
	this->address = address;
	this->phoneNumber = phoneNumber;
	this->medicalNumber = medicalNumber;
	this->diagnosis = diagnosis;
}

Patient::Patient(const Patient& other)
	: id(other.id), surname(other.surname), firstName(other.firstName), middleName(other.lastName), address(other.address), phoneNumber(other.phoneNumber), medicalNumber(other.medicalNumber), diagnosis(other.diagnosis) {}

Patient::~Patient() {

}