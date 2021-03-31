#include "List.h"
#include <cctype>


int main()
{
	List object;
	int id=0, age=0;
	float gpa=0;
	string name="";
	
	
	char operation = 'c';

	cout << "==================================" << endl;
	cout << "Please Select an operation to proceed" << endl;

	cout << "Enter C/c to create/insert  nodes OR D/d to delete nodes" << endl << endl;
	cin >> operation;
	

	cout << "==================================" << endl << endl;

	if (tolower(operation)=='c') {
		CREATE:
		char choice = 'Y';
		do {
			cout << "Enter your Id:";
			cin >> id;
			cout << "Enter your Age:";
			cin >> age;
			cout << "Enter GPA:";
			cin >> gpa;

			cout << "Enter your name:";
			cin >> name;

			int index = 0;

			cout << "Choose a Location to insert this node" << endl << endl;
			cout << "Available choices \n 1 for  the start \n 2 for the  tail \n 3 to  after a node in between OR 4 before a node  in between \n Insert any other integer value to insert  without  any prefrences" << endl;
			cin >> index;
			if (index == 1)
			{
				object.insert_at_start(name, id, age, gpa);
			}
			else if (index == 2) {
				object.insert_at_tail(name, id, age, gpa);
			}
			else if (index == 3) {
				int after = 0;
				do {
					cout << "Enter an index to place node after Please select last at maximum OR 90 to quit" << endl;
					cin >> after;
					if (after == 90)
					{
						break;
					}

				} while (after > object.getsizeOfList());
				object.insert_after(name, id, age, gpa, after);
			}
			else if (index == 4) {
				int before = 0;
				cout << "Enter an index to place node before" << endl;
				cin >> before;

				object.insert_before(name, id, age, gpa, before);
			}
			else {
				object.create_node(name, id, age, gpa);
			}
			cout << "Do you want to insert again Y/N?";
			cin >> choice;


		} while (choice == 'Y' || choice == 'y');
	}
	else {
		if (tolower(operation) == 'd') {

			cout << "You chose to delete" << endl;
			object.display();
		        again:
				cout << "\n\n Please Create a List, to enter a Node Select C/c or Q/q to quit:" << endl << endl;
				cin >> operation;
				if (operation == 'C' || operation == 'c') {
					goto CREATE;
				}
				
			
			
		}
	}

	 return 0;
}