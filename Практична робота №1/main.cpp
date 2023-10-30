#include "Patient.h"
#include "Doctor.h"
#include "Vector.h"
#include "Vector.cpp"
//void menu(int size, Person** person) {
//	int choice1;
//	do {
//		cout << "1 - Enter data about objects\n2 - Print data about objects\n3 - Print abstract methods\n4 - Exit" << endl;
//		cin >> choice1;
//		switch (choice1) {
//		case 1:
//			for (int i = 0; i < size; i++) {
//				char choice;
//				cout << "Size: " << size << endl;
//				cout << "i: " << i<< endl;
//				cout << "Enter 'D' for a doctor or 'P' for a patient: ";
//				cin >> choice;
//				switch (choice) {
//				case 'D':
//				case 'd':
//					person[i] = new Doctor();
//					person[i]->inputData(); break;
//				case 'P':
//				case 'p':
//					person[i] = new Patient();
//					person[i]->inputData(); break;
//				default: cout << "Invalid choice. Please enter 'D/d' or 'P/p'." << endl; exit(0);
//				}
//			}
//			break;
//		case 2:
//			cout << "Data entered:" << endl << endl;
//			for (int j = 0; j < size; j++) {
//				if (person[size] == 0) { cout << "Масив не створено!!"; exit(0); }
//				cout << "\t\tObject N" << j + 1 << endl;
//				person[j]->outputData();
//				cout << endl;
//			}
//			break;
//		case 3: 
//			for (int i = 0; i < size; i++) {
//			cout << "\t\tObject N" << i + 1 << ":\n";
//			cout << person[i]->toString() << endl;
//			cout << endl;
//			} 
//			  break;
//		case 4: cout << "Exiting..." << endl; break;
//		default:
//			cout << "Wrong key" << endl; break;
//		}
//	} while (choice1 != 4);
//}

int main()
{
	/*int choice;
	do {
		cout << "\t\t1 - Do Practical Work #4. Add info about 3 patients and 3 doctors using inheritance\n\t\t2 - Do Practical Work #5. Add 5 objects(doctors/patients) using polymorphism\n\t\t3 - Exit program\nEnter your choice: ";
		cin >> choice;
		Patient patient1, patient2, patient3;
		Doctor doctor1, doctor2, doctor3;
		switch (choice) {
		case 1:
			cout << "\n\n\t\tInfo about PATIENTS:" << endl;
			
			cin >> patient1 >> patient2 >> patient3;
			cout << "\tPatient #1\n" << patient1 << endl << "\Patient #2\n" << patient2 << endl << "\Patient #3\n" << patient3;
			if (patient1 == patient2 && patient1 == patient3) cout << "All the info about patients is the same" << endl;
			else if (patient1 == patient2) cout << "Info about patient1 and patient2 is the same" << endl;
			else if (patient1 == patient2) cout << "Info about patient1 and patient3 is the same" << endl;
			else if (patient2 == patient3) cout << "Info about patient2 and patient3 is the same" << endl;

			cout << "\t\tInfo about DOCTORS:" << endl;
			
			cin >> doctor1 >> doctor2 >> doctor3;
			cout << "\tDoctor #1\n" << doctor1 << endl << "\tDoctor #2\n" << doctor2 << endl << "\tDoctor #3\n" << doctor3;
			if (doctor1 == doctor2 && doctor1 == doctor3) cout << "All the info about doctors is the same" << endl;
			else if (doctor1 == doctor2) cout << "Info about doctor1 and doctor2 is the same" << endl;
			else if (doctor1 == doctor3) cout << "Info about doctor1 and doctor3 is the same" << endl;
			else if (doctor2 == doctor3) cout << "Info about doctor2 and doctor3 is the same" << endl;
			break;
		case 2:
			Person * person[5];
			int choice1;
			do {
				cout << "\t\t1 - Menu\n\t\t2 - Exit" << endl;
				cin >> choice1;
				switch (choice1) {
				case 1: menu(5, person); break;
				case 2: cout << "Exiting..." << endl; 
					for (int i = 0; i < 5; i++) {
						if(person[i]!=nullptr)
						delete person[i];
					}
					break;
				default: cout << "Wrong key." << endl; break;
				}
			} while (choice1 != 2);
			break;
		case 3: exit(0);
		default: cout << "Wrong key." << endl; break;
		} 
	} while (choice != 3);*/
	/*Vector <int> intArr;
	cout << "Size: " << intArr.getSize() << endl;
	cout << "Capacity: " << intArr.getCapacity();
	for (int i = 1; i <= 15; i++) {
		intArr.push_back(i+123);
	}

	for (int i = 1; i <= 15; i++) {
		cout << " " << intArr[i];
	}*/
	Vector<int> intVector;
	for (int i = 0; i < 20; i++) {
		intVector.push_back(i * 3);
	}
	cout << "Int Vector: " << endl;
	for (int i = 0; i < intVector.getSize(); i++) {
		cout << intVector[i] << " ";
	}
	cout << endl << endl;

	Vector<double> doubleVector;
	for (int i = 0; i < 12; i++) {
		doubleVector.push_back(i *2.34);
	}
	cout << "Double Vector: " << endl;
	for (int i = 0; i < doubleVector.getSize(); i++) {
		cout << doubleVector[i] << " ";
	}
	cout << endl << endl;

	Vector<string> stringVector;
	stringVector.push_back("Doing");
	stringVector.push_back("Practical Work");
	stringVector.push_back("#6!");
	cout << "String Vector: "<<endl;
	for (int i = 0; i < stringVector.getSize(); i++) {
		cout << stringVector[i] << " ";
	}
	cout << endl << endl;

	cout << "Class Vector: "<<endl;
	Doctor doctor1;
	Doctor doctor2(517289734, "Jobs", "Steve", "Paul", "456 Elm St", "5555678", "Electronic Industries");
	cout << "Entering data about doctor1: " << endl;
	doctor1.inputData();

	Patient patient1;
	Patient patient2(600158568, "Bryndio", "Oleksandr", "Volodymyrovych", "Shevchenka11", "0987654321", "118702", "Backend");
	cout << "Entering data about patient1: " << endl;
	patient1.inputData();
	// Створіть контейнер Vector для об'єктів Doctor
	Vector<Doctor*> doctorVector;
	doctorVector.push_back(&doctor1);
	doctorVector.push_back(&doctor2);
	for (int i = 0; i < doctorVector.getSize(); i++) {
		Doctor* doctor = doctorVector[i];
		cout << "Doctor " << i + 1 << ": " << endl;
		doctor->outputData();
	}
	Vector<Patient*> patientVector;
	patientVector.push_back(&patient1);
	patientVector.push_back(&patient2);
	for (int i = 0; i < patientVector.getSize(); i++) {
		Patient* patient = patientVector[i];
		cout << "Patient " << i + 1 << ": " << endl;
		patient->outputData();
	}
}

