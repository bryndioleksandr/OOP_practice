#include "Patient.h"
int main()
{
	Patient object1, object2, object3;
	cin >> object1 >> object2 >> object3;
	cout << object1 << endl << object2 << endl << object3;
	if (object1 == object2 && object1 == object3) cout << "All the objects are equal" << endl;
	else if (object1 == object2) cout << "Object1 equals to object2" << endl;
	else if (object1 == object3) cout << "Object1 equals to object3" << endl;
	else if (object2 == object3) cout << "Object2 equals to object3" << endl;
}