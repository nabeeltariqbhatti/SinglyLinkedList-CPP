#include "Node.h";

class List
{

private:
	Node* head, * tail;

public:
	List();

	bool create_node(string name, int id, int age, float gpa);
	void display();
	~List();
};