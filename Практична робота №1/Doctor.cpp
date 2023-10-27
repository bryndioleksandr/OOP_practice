#include "Doctor.h"

Doctor::Doctor() : id(0), surname(""), firstName(""), lastName(""), address(""), phoneNumber(""), specialization("") {}

Doctor::Doctor(int id, string surname, string firstName, string lastName, string address, string phoneNumber, string specialization) {
    this->id = id;
    this->surname = surname;
    this->firstName = firstName;
    this->lastName = lastName;
    this->address = address;
    this->phoneNumber = phoneNumber;
    this->specialization = specialization;
}

Doctor::Doctor(const Doctor& other)
    : id(other.id), surname(other.surname), firstName(other.firstName), lastName(other.lastName), address(other.address), phoneNumber(other.phoneNumber), specialization(other.specialization) {}

Doctor::~Doctor() {

}

istream& operator>>(istream& is, Doctor& doctor) {
    cout << "Enter ID: ";
    is >> doctor.id;

    cout << "Enter Surname: ";
    is >> doctor.surname;

    cout << "Enter First Name: ";
    is >> doctor.firstName;

    cout << "Enter Last Name: ";
    is >> doctor.lastName;

    cout << "Enter Address: ";
    is >> doctor.address;

    cout << "Enter Phone Number: ";
    is >> doctor.phoneNumber;

    cout << "Enter Specialization: ";
    is >> doctor.specialization;

    return is;
}

ostream& operator<<(ostream& os, Doctor& doctor)
{
    os << "--------------------------\n";
    os << "ID: " << doctor.id << "\n";
    os << "Surname: " << doctor.surname << "\n";
    os << "First name: " << doctor.firstName << "\n";
    os << "Last name: " << doctor.lastName << "\n";
    os << "Address: " << doctor.address << "\n";
    os << "Phone number: " << doctor.phoneNumber << "\n";
    os << "Specialization: " << doctor.specialization << "\n";
    os << "-------------------------- \n\n";
    return os;
}

bool Doctor::operator==(const Doctor& other) const {
    return (id == other.id) && (surname == other.surname) && (firstName == other.firstName)
        && (lastName == other.lastName) && (address == other.address) && (phoneNumber == other.phoneNumber)
        && (specialization == other.specialization);
}