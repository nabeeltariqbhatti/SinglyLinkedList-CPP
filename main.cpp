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
		else if(index==4) {
			int before = 0;
			cout << "Enter an index to place node before" << endl;
			cin >> before;

			object.insert_before(name, id, age, gpa,before);
		}
		else {
			object.create_node(name, id, age, gpa);
		}
		cout << "Do you want to insert again Y/N?";
		cin >> choice;


	} while (choice == 'Y' || choice == 'y');

	


	
	
	
	 return 0;
}