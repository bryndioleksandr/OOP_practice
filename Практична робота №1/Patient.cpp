#include "Patient.h"

Patient::Patient() : medicalNumber(""), diagnosis("") {}

Patient::Patient(int id, string surname, string firstName, string lastName, string address, string phoneNumber, string medicalNumber, string diagnosis) : Person(id, surname, firstName, lastName, address, phoneNumber), medicalNumber(medicalNumber), diagnosis(diagnosis) {}

Patient::Patient(const Patient& other) : Person(other), medicalNumber(other.medicalNumber), diagnosis(other.diagnosis) {}

Patient::~Patient() {

}

int Patient::getId() {return Person::getId();}

istream& operator>>(istream& is, Patient& patient) {
    is >> static_cast<Person&>(patient);
    cout << "Enter Medical Number: ";
    is >> patient.medicalNumber;
    cout << "Enter Diagnosis: ";
    is >> patient.diagnosis;
    return is;
}

ostream& operator<<(ostream& os, Patient& patient)
{
    os << static_cast<Person&>(patient);
    os << "Medical card number: " << patient.medicalNumber << "\n";
    os << "Diagnosis: " << patient.diagnosis << "\n";
    os << "-------------------------- \n\n";
    return os;
}

bool Patient::operator==(const Patient& other) const {
    return (Person::operator==(other) && medicalNumber == other.medicalNumber && diagnosis == other.diagnosis);
}

string Patient::toString() {
    return medicalNumber + " " + diagnosis;
}

void Patient::inputData() {
    Person::inputData();
    cout << "Enter Medical Number: ";
    cin >> medicalNumber;
    cout << "Enter Diagnosis: ";
    cin >> diagnosis;
}

void Patient::outputData() {
    cout << "\tPatient\n";
    Person::outputData();
    cout << "Medical card number: " << medicalNumber << "\n";
    cout << "Diagnosis: " << diagnosis << "\n";
    cout << "-------------------------- \n\n";
}
