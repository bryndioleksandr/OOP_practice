#include "Patient.h"

int main()
{
	cout << "\n\n\t\tInfo about PATIENTS:" << endl;
	Patient patient1, patient2, patient3;
	cin >> patient1 >> patient2 >> patient3;
	cout << "\Patient #1" << patient1 << endl << "\Patient #2" << patient2 << endl << "\Patient #3" << patient3;
	if (patient1 == patient2 && patient1 == patient3) cout << "All the info about patients is the same" << endl;
	else if (patient1 == patient2) cout << "Info about patient1 and patient2 is the same" << endl;
	else if (patient1 == patient2) cout << "Info about patient1 and patient3 is the same" << endl;
	else if (patient2 == patient3) cout << "Info about patient2 and patient3 is the same" << endl;
}