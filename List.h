#include "Node.h";

class List
{

private:
	Node* head, * tail;

public:
	List();

	bool create_node(string name, int id, int age, float gpa);
	bool insert_at_start(string name, int id, int age, float gpa);
	bool insert_at_tail(string name, int id, int age, float gpa);
	bool insert_after(string name, int id, int age, float gpa, int after);
	bool insert_before(string name, int id, int age, float gpa, int before);
	int getsizeOfList();
	void display();
	~List();
};