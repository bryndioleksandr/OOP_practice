#include "Patient.h"
#include <iostream> // Add this include for std::cin and std::cout

Patient::Patient() : id(0), surname(""), firstName(""), lastName(""), address(""), phoneNumber(""), medicalNumber(""), diagnosis("") {}

Patient::Patient(int id, std::string surname, std::string firstName, std::string lastName, std::string address, std::string phoneNumber, std::string medicalNumber, std::string diagnosis) {
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

std::istream& operator>>(std::istream& is, Patient& patient) {
    std::cout << "Enter ID: ";
    is >> patient.id;

    std::cout << "Enter Surname: ";
    is >> patient.surname;

    std::cout << "Enter First Name: ";
    is >> patient.firstName;

    std::cout << "Enter Last Name: ";
    is >> patient.lastName;

    std::cout << "Enter Address: ";
    is >> patient.address;

    std::cout << "Enter Phone Number: ";
    is >> patient.phoneNumber;

    std::cout << "Enter Medical Number: ";
    is >> patient.medicalNumber;

    std::cout << "Enter Diagnosis: ";
    is >> patient.diagnosis;
    return is;
}

std::ostream& operator<<(std::ostream& os, Patient& patient) {
    os << "--------------------------\n";
    os << "ID: " << patient.id << "\n";
    os << "Surname: " << patient.surname << "\n";
    os << "First name: " << patient.firstName << "\n";
    os << "Last name: " << patient.lastName << "\n";
    os << "Address: " << patient.address << "\n";
    os << "Phone number: " << patient.phoneNumber << "\n";
    os << "Medical card number: " << patient.medicalNumber << "\n";
    os << "Diagnosis: " << patient.diagnosis << "\n";
    os << "-------------------------- \n\n";
    return os;
}

/*std::string Patient::toString() const {
    std::stringstream ss;
    ss << "--------------------------\n";
    ss << "ID: " << id << "\n";
    ss << "Surname: " << surname << "\n";
    ss << "First name: " << firstName << "\n";
    ss << "Last name: " << lastName << "\n";
    ss << "Address: " << address << "\n";
    ss << "Phone number: " << phoneNumber << "\n";
    ss << "Medical card number: " << medicalNumber << "\n";
    ss << "Diagnosis: " << diagnosis << "\n";
    ss << "-------------------------- \n\n";
    return ss.str();
}*/

bool Patient::operator==(const Patient& other) const {
    return (id == other.id) && (surname == other.surname) && (firstName == other.firstName)
           && (lastName == other.lastName) && (address == other.address) && (phoneNumber == other.phoneNumber)
           && (medicalNumber == other.medicalNumber) && (diagnosis == other.diagnosis);
}
