#include "Patient.h"
#include "Doctor.h"

int main()
{ 
	cout << "\n\n\t\tInfo about PATIENTS:" << endl;
	Patient patient1, patient2, patient3;
	cin >> patient1 >> patient2 >> patient3;
	cout << "\tPatient #1\n" << patient1 << endl << "\Patient #2\n" << patient2 << endl << "\Patient #3\n" << patient3;
	if (patient1 == patient2 && patient1 == patient3) cout << "All the info about patients is the same" << endl;
	else if (patient1 == patient2) cout << "Info about patient1 and patient2 is the same" << endl;
	else if (patient1 == patient2) cout << "Info about patient1 and patient3 is the same" << endl;
	else if (patient2 == patient3) cout << "Info about patient2 and patient3 is the same" << endl;

	cout << "\t\tInfo about DOCTORS:" << endl;
	Doctor doctor1, doctor2, doctor3;
	cin >> doctor1 >> doctor2 >> doctor3;
	cout << "\tDoctor #1\n" << doctor1 << endl << "\tDoctor #2\n" << doctor2 << endl << "\tDoctor #3\n" << doctor3;
	if (doctor1 == doctor2 && doctor1 == doctor3) cout << "All the info about doctors is the same" << endl;
	else if (doctor1 == doctor2) cout << "Info about doctor1 and doctor2 is the same" << endl;
	else if (doctor1 == doctor3) cout << "Info about doctor1 and doctor3 is the same" << endl;
	else if (doctor2 == doctor3) cout << "Info about doctor2 and doctor3 is the same" << endl;

}