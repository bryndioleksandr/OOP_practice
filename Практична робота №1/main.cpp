//#include "Vector.h"
//#include "Vector.cpp"
//#include <vector>
#include "Patient.h"
#include "Doctor.h"
#include <cstdlib>
#include <ctime> 
#include <algorithm>
#include <list>
#include <map>

//void menu(int size, Person** person) {
//	int choice1;
//	do {
//		cout << "1 - Enter data about objects\n2 - Print data about objects\n3 - Print abstract methods\n4 - Exit" << endl;
//		cin >> choice1;
//		switch (choice1) {
//		case 1:
//			for (int i = 0; i < size; i++) {
//				char choice;
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
//				if (person[size] == 0) { cout << "????? ?? ????????!!"; exit(0); }
//				cout << "\t\tObject N" << j + 1 << endl;
//				person[j]->outputData();
//				cout << endl;
//			}
//			break;
//		case 3:
//			for (int i = 0; i < size; i++) {
//				cout << "\t\tObject N" << i + 1 << ":\n";
//				cout << person[i]->toString() << endl;
//				cout << endl;
//			}
//			break;
//		case 4: cout << "Exiting..." << endl; break;
//		default:
//			cout << "Wrong key" << endl; break;
//		}
//	} while (choice1 != 4);
//}
//template <typename T>
//void printUsingIndex(T vector) {
//	for (int i = 0; i < vector.size(); i++) {
//		cout << vector[i] << " ";
//	}
//	cout << endl << endl;
//}
//
//template <typename T>
//void printUsingIterator(T vector) {
//	for (auto it : vector) {
//		cout << it << " ";
//	}
//	cout << endl << endl;
//}
//
template <typename T>
void printList(const list<T>& ls) {
	for (auto it = ls.begin(); it != ls.end(); it++) {
		cout << *it << " ";
	}
	cout << endl << endl;
}

void inputIntoMap(map<int, Person*>& personMap, Person& person) {
	person.inputData();
	personMap[person.getId()] = &person;
	cout << endl;
}

void showMapObj(map<int, Person*>& personMap) {
	bool check = false;
	if (!personMap.empty()) {
		int enterId;

		cout << "Enter ID to see info about doctor or patient: ";
		cin >> enterId;
		for (const auto& pair : personMap) {
			if (enterId == pair.first) {
				int id = pair.first;
				Person* person = pair.second;

				cout << endl << "Here is a person with its ID #" << id << ":" << endl;
				person->outputData();
				check = true;
			}
		}
		if (!check) {
			int choice;
			cout << "Could not find any object with ID = " << enterId << ". Please, try again." << endl;
		}

	}
	else cout << "Map is empty!! Fill it, please." << endl;

}

int main()
{
	srand(time(NULL));
	int N = 100;
	list<int> oddList(10);
	list<int> evenList(10);

	int random_number;
	for (auto& it : oddList) {
		do {
			random_number = rand() % N + 1;
		} while (random_number % 2 == 0);
		it = random_number;
	}
	cout << "List with random odd numbers:" << endl;
	printList(oddList);

	for (auto& it : evenList) {
		do {
			random_number = rand() % N + 1;
		} while (random_number % 2 == 1);
		it = random_number;
	}
	cout << "List with random even numbers:" << endl;
	printList(evenList);

	oddList.sort();
	cout << "Sorted list with odd numbers:" << endl;
	printList(oddList);

	evenList.sort();
	cout << "Sorted list with even numbers:" << endl;
	printList(evenList);

	list<int> mergedList;
	oddList.merge(evenList);
	mergedList.merge(oddList);
	cout << "Merged list(oddList + evenList):" << endl;
	printList(mergedList);

	map<int, Person*> personMap;
	Doctor doctor1, doctor2;
	Patient patient1, patient2;

	int choice;
	do {
		cout << "\n\n\t\t\tMenu:\n\t1 - Enter data about objects into map\n\t2 - Print data about objects which are in map\n\t3 - Exit the program\n\tEnter your choice: ";
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Input data about patient1: " << endl;
			inputIntoMap(personMap, patient1);
			cout << "Input data about patient2: " << endl;
			inputIntoMap(personMap, patient2);
			cout << "Input data about doctor1: " << endl;
			inputIntoMap(personMap, doctor1);
			cout << "Input data about doctor2: " << endl;
			inputIntoMap(personMap, doctor2);
			break;

		case 2:showMapObj(personMap); break;
		case 3: cout << "Exiting..." << endl; break;
		}
	} while (choice != 3);

	/*for (const auto& pair : personMap) {
		int id = pair.first;
		Person* person = pair.second;

		cout << endl<<"ID: " << id << endl;
		person->outputData();
	}*/
	/*int choice;
	do {
		cout << "\t1 - Enter data about doctors\n\t2 - Enter data about patients\n\t3 - Print data about doctors\n\t4 - Print data about patients\n\t5 - Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Entering data about doctor1: " << endl;

			break;
		case 2:

			break;
		case 3:
			if (!personVector.empty()) for (Person* doctor : personVector)doctor->outputData();
			else { cout << "There is no data about doctors, pls enter it!" << endl; continue; }
			  break;
		case 4:
			if (!personVector.empty())for (Person* patient : personVector)patient->outputData();
			else { cout << "There is no data about patients, pls enter it!" << endl; continue; }
			  break;
		case 5: cout << "Exiting..." << endl; break;
			}
		} while (choice != 5);*/









		//vector<int> evenVector(10);
		//vector<int> oddVector(10);
		//int random_number;
		//for (int i = 0; i < evenVector.size(); i++) {
		//	do {
		//		random_number = rand() % N + 1;
		//	} while (random_number % 2 == 0);

		//	//cout << "rand1_" << i + 1 << " = " << random_number << endl;
		//	evenVector[i] = random_number;
		//}
		//cout << "Vector with even numbers: " << endl;
		//printUsingIndex(evenVector);

		//vector<int>::iterator it = oddVector.begin();
		//for (int i = 0; it != oddVector.end(); ++i, ++it) {
		//	do {
		//		random_number = rand() % N + 1;
		//	} while (random_number % 2 == 1);
		//	//cout << "rand2_" << i + 1 << " = " << random_number << endl;
		//	*it = random_number;
		//}

		//cout << "Vector with odd numbers: " << endl;
		//printUsingIterator(oddVector);

		//sort(evenVector.begin(), evenVector.end());
		//cout << "Sorted vector with even numbers: " << endl;
		//printUsingIndex(evenVector);

		//sort(oddVector.begin(), oddVector.end());
		//cout << "Sorted vector with odd numbers: " << endl;
		//printUsingIterator(oddVector);

		//vector<int> mergedVector;
		//merge(evenVector.begin(), evenVector.end(), oddVector.begin(), oddVector.end(), inserter(mergedVector, mergedVector.end()));
		//cout << "Merged vector(evenVector + oddVector): " << endl;
		//printUsingIterator(mergedVector);

		//vector<Person*> personVector;
		//Doctor doctor1;
		//Doctor doctor2(517289734, "Jobs", "Steve", "Paul", "456 Elm St", "5555678", "Electronic Industries");

		//Patient patient1;
		//Patient patient2(600158568, "Bryndio", "Oleksandr", "Volodymyrovych", "Shevchenka11", "0987654321", "118702", "Backend");

		//int choice;
		//do {
		//	cout << "\t1 - Enter data about doctors\n\t2 - Enter data about patients\n\t3 - Print data about doctors\n\t4 - Print data about patients\n\t5 - Exit" << endl;
		//	cout << "Enter your choice: ";
		//	cin >> choice;
		//	switch (choice) {
		//	case 1:
		//		cout << "Entering data about doctor1: " << endl;
		//		doctor1.inputData();
		//		personVector.push_back(&doctor1);
		//		personVector.push_back(&doctor2);
		//		break;
		//	case 2:
		//		cout << "Entering data about patient1: " << endl;
		//		patient1.inputData();
		//		personVector.push_back(&patient1);
		//		personVector.push_back(&patient2);
		//		break;
		//	case 3: 
		//		if (!personVector.empty()) for (Person* doctor : personVector)doctor->outputData();
		//		else { cout << "There is no data about doctors, pls enter it!" << endl; continue; }
		//		  break;
		//	case 4:
		//		if (!personVector.empty())for (Person* patient : personVector)patient->outputData();
		//		else { cout << "There is no data about patients, pls enter it!" << endl; continue; }
		//		  break;
		//	case 5: cout << "Exiting..." << endl; break;
		//		}
		//	} while (choice != 5);

		//	vector<Doctor*> newDoctorVector;
		//	vector<Patient*> newPatientVector;

		//	for(Person * person : personVector) {
		//		if (Doctor* doctor = dynamic_cast<Doctor*>(person)) {
		//			newDoctorVector.push_back(doctor);
		//		}
		//		else if (Patient* patient = dynamic_cast<Patient*>(person)) {
		//			newPatientVector.push_back(patient);
		//		}
		//	}

		//	
		//	cout << "Printing only Doctor Vector objects"<<endl;
		//	for (Doctor* doctor : newDoctorVector) {
		//		doctor->outputData();
		//	}

		//	cout << "Printing only Patient Vector objects" << endl;
		//	for (Patient* patient : newPatientVector) {
		//		patient->outputData();
		//	}

		//	vector<Person*> newDoctorVec(personVector);
		//	vector<Person*> newPatientVec(personVector);

		//	for (int i = 0; i < newDoctorVec.size();i++) {
		//		if (dynamic_cast<Doctor*>(newDoctorVec[i])) {
		//			newDoctorVec.erase(newDoctorVec.begin() + i);
		//		}
		//	}
		//	cout << "Vector after erasing Doctor and Patient objects:\n";
		//	for (Person* person : newDoctorVec) {
		//		person->outputData();
		//	}

		//	for (int i = 0; i < newPatientVec.size(); i++) {
		//		if (dynamic_cast<Patient*>(newPatientVec[i])) {
		//			newPatientVec.erase(newPatientVec.begin() + i);
		//		}
		//	}

		//	cout << "Vector after erasing Doctor and Patient objects:\n";
		//	for (Person* person : newPatientVec) {
		//		person->outputData();
		//	}

		//	


			/*for (auto it = newDoctorVector.begin(); it != newDoctorVector.end();) {
				delete* it;
				it = newDoctorVector.erase(it);
			}

			for (auto it = newPatientVector.begin(); it != newPatientVector.end();) {
				delete* it;
				it = newPatientVector.erase(it);
			}*/


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
								if (person[i] != nullptr)
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


			/*Vector<int> intVector;
			for (int i = 0; i < 20; i++) {
				intVector.push_back(i * 3);
			}
			cout << "Int Vector: " << endl;
			for (int i = 0; i < intVector.getSize(); i++) {
				cout << intVector[i] << " ";
			}
			cout << endl;

			cout << "Int Vector. Deleted last element: " << endl;
			intVector.pop_back();
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
			cout << endl;

			cout << "Double Vector. Deleted last element: " << endl;
			doubleVector.pop_back();
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
			cout << endl;

			cout << "String Vector. Deleted last element: " << endl;
			stringVector.pop_back();
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
			}*/

}


