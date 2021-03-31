#include "List.h"

List::List()
{
    head = tail = NULL;
}

bool List::create_node(string name, int id, int age, float gpa)
{

    Node* temp = new Node;

    temp->name = name;
    temp->id = id;
    temp->age = age;
    temp->gpa = gpa;
    temp->next = NULL;
    if (!head)
    {
      
        head = tail = temp;
        temp = NULL;
        return true;
    }
    else
    {
        tail->next = temp;
        tail = tail->next;
        tail->next = NULL;
        temp = NULL;
        return true;
    }
    return false;
}

void List::display()
{
    if (!head)
    {
        cout << "Linked List does not exist";
    }
    else
    {
        Node *t = head;
        
            while (t!= NULL)
            {
                cout << "Id:" << t->id<<endl;
                cout << "Age:" << t->age<<endl;
                cout << "GPA:" << t->gpa<<endl;
                cout << "Name:" << t->name << endl<<endl;

          

              
                t = t->next;
            
            }
        
    }
}
List::~List() {
    if (head) {
        Node* traverser = head;
        head = head->next;
        while (head != NULL) {
            delete traverser;
            traverser = head;
            head = head->next;
        }
    }
   
    
    
}