#pragma once

#include <string>
#include <iostream>

class Patient {
    int id;
    std::string surname;
    std::string firstName; // Added std::
    std::string lastName; // Added std::
    std::string address; // Added std::
    std::string phoneNumber; // Added std::
    std::string medicalNumber; // Added std::
    std::string diagnosis; // Added std::
public:
    Patient();
    Patient(int id, std::string surname, std::string firstName, std::string lastName, std::string address, std::string phoneNumber, std::string medicalNumber, std::string diagnosis); // Added std::
    Patient(const Patient& other);
    ~Patient();
    std::string toString()const;
    friend std::istream& operator>>(std::istream& is, Patient& patient);
    friend std::ostream& operator<<(std::ostream& os, Patient& patient);
    bool operator==(const Patient& other) const;
};
