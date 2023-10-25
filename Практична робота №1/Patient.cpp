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
	: id(other.id), surname(other.surname), firstName(other.firstName), lastName(other.lastName), address(other.address), phoneNumber(other.phoneNumber), medicalNumber(other.medicalNumber), diagnosis(other.diagnosis) {}

Patient::~Patient() {

}

istream& operator>>(istream& is, Patient& patient){
    cout << "Enter ID: ";
    is >> patient.id;

    cout << "Enter Surname: ";
    is >> patient.surname;

    cout << "Enter First Name: ";
    is >> patient.firstName;

    cout << "Enter Last Name: ";
    is >> patient.lastName;

    cout << "Enter Address: ";
    is >> patient.address;

    cout << "Enter Phone Number: ";
    is >> patient.phoneNumber;

    cout << "Enter Medical Number: ";
    is >> patient.medicalNumber;

    cout << "Enter Diagnosis: ";
    is >> patient.diagnosis;
    return is;
}

ostream& operator<<(ostream& os, Patient& patient)
{
    os << "--------------------------\n";
    os << "ID: " <<patient.id <<"\n";
    os << "Surname: " << patient.surname<<"\n";
    os << "First name: " << patient.firstName<<"\n";
    os << "Last name: " << patient.lastName<<"\n";
    os << "Address: " << patient.address<<"\n";
    os << "Phone number: " << patient.phoneNumber <<"\n";
    os << "Medical card number: " << patient.medicalNumber<<"\n";
    os << "Diagnosis: " << patient.diagnosis<<"\n";
    os << "-------------------------- \n\n";
    return os;
}

bool Patient::operator==(const Patient& other) const {
    return (id == other.id) && (surname == other.surname) && (firstName == other.firstName)
        && (lastName == other.lastName) && (address == other.address) && (phoneNumber == other.phoneNumber)
        && (medicalNumber == other.medicalNumber) && (diagnosis == other.diagnosis);
}

