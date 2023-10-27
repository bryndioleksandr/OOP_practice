#include "Person.h"

Person::Person() : id(0), surname(""), firstName(""), lastName(""), address(""), phoneNumber("") {}

Person::Person(int id, string surname, string firstName, string lastName, string address, string phoneNumber) {
    this->id = id;
    this->surname = surname;
    this->firstName = firstName;
    this->lastName = lastName;
    this->address = address;
    this->phoneNumber = phoneNumber;
}

Person::Person(const Person& other)
    : id(other.id), surname(other.surname), firstName(other.firstName), lastName(other.lastName), address(other.address), phoneNumber(other.phoneNumber) {}

Person::~Person() {

}

istream& operator>>(istream& is, Person& person) {
    cout << "Enter ID: ";
    is >> person.id;

    cout << "Enter Surname: ";
    is >> person.surname;

    cout << "Enter First Name: ";
    is >> person.firstName;

    cout << "Enter Last Name: ";
    is >> person.lastName;

    cout << "Enter Address: ";
    is >> person.address;

    cout << "Enter Phone Number: ";
    is >> person.phoneNumber;
    return is;
}

ostream& operator<<(ostream& os, Person& person)
{
    os << "--------------------------\n";
    os << "ID: " << person.id << "\n";
    os << "Surname: " << person.surname << "\n";
    os << "First name: " << person.firstName << "\n";
    os << "Last name: " << person.lastName << "\n";
    os << "Address: " << person.address << "\n";
    os << "Phone number: " << person.phoneNumber << "\n";
    return os;
}

bool Person::operator==(const Person& other) const {
    return (id == other.id) && (surname == other.surname) && (firstName == other.firstName)
        && (lastName == other.lastName) && (address == other.address) && (phoneNumber == other.phoneNumber);
}
