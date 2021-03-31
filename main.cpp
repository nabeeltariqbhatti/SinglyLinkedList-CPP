#include "List.h"

int main()
{
	int id, age;
	float gpa;
	string name;

	List object;

	char choice='Y';
	do {
		cout << "Enter your Id:";
		cin >> id;
		cout << "Enter your Age:";
		cin >> age;
		cout << "Enter GPA:";
		cin >> gpa;
	
		cout << "Enter your name:";
		cin >> name;
		cout << "Do you want to insert again Y/N?";
		cin >> choice;

	} while (choice == 'Y' || choice == 'y');

	


	
	
	
	 return 0;
}