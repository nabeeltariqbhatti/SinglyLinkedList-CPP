#include "List.h"

List::List()
{
    head = tail = NULL;
}
bool List::delete_node(int node_number_to_del) {
    if (!head) {
        return false;
    }
    else {
        if (node_number_to_del == 1)
        {
            head = NULL;
            tail = NULL;
            return true;
            
        }
        else {
            int counter = 1;
            Node* t = head;
            while (t != NULL) {
                if (counter == node_number_to_del - 1) {
                    Node* temp = t->next;
                    t->next = temp->next;
                    delete temp;
                    return true;
                }
                t = t->next;
                counter++;
            }
        }
       
    }
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
        display();
        return true;
    }
    else
    {
        tail->next = temp;
        tail = tail->next;
        tail->next = NULL;
        temp = NULL;
        display();
        return true;
    }
    return false;
}

void List::display()
{
    if (!head)
    {
        cout << "Linked List does not exist" << endl;;
    }
    else
    {
        int counter = 1;
        Node *t = head;
        
            while (t!= NULL)
            {
                cout << "______________________________" << endl;
                cout << "Node Number : "<< " " << counter << endl;
                cout << "Id:" << t->id<<endl;
                cout << "Age:" << t->age<<endl;
                cout << "GPA:" << t->gpa<<endl;
                cout << "Name:" << t->name << endl<<endl;

          

              
                t = t->next;
                counter++;
            
            }
        
    }
}

bool List::insert_at_start(string name, int id, int age, float gpa) {
    if (!head) {
        cout << "This is the first node so it could only be inserted at start or head and tail both" << endl;
        create_node(name, id, age, gpa);
       
        return true;
    }
    else
    {
        Node* temp = new Node;

        temp->name = name;
        temp->id = id;
        temp->age = age;
        temp->gpa = gpa;
        temp->name = name;

        temp->next = head;
        head = temp;
        temp = NULL;
        display();
        return true;
    }
   
    return false;

   
}
bool List::insert_at_tail(string name, int id, int age, float gpa) {
    if (!head) {
        cout << "This is the first node so it could only be inserted as first node or head and tail both" << endl;
        create_node(name, id, age, gpa);
        return true;
    }
    else {
        Node* temp = new Node;

        temp->name = name;
        temp->id = id;
        temp->age = age;
        temp->gpa = gpa;
        temp->name = name;

        tail->next = temp;
        tail = tail->next;
        tail->next = NULL;
        temp = NULL;
        display();
        return true;

    }


}
int List::getsizeOfList()
{
    int counter = 1;
    Node* t = head;

    while (t != NULL)
    {
        cout << "______________________________" << endl;
        cout << "Node Number : " << " " << counter << endl;
        cout << "Id:" << t->id << endl;
        cout << "Age:" << t->age << endl;
        cout << "GPA:" << t->gpa << endl;
        cout << "Name:" << t->name << endl << endl;




        t = t->next;
        counter++;

    }
    return counter;
}
bool List::insert_after(string name, int id, int age, float gpa, int after) {
    if (!head || head->next==NULL && tail->next==NULL && after==1) {
        cout << "Linked list was not present so it was inserted as first node" << endl;
        create_node(name, id, age, gpa);
    }
    else {
        int counter = 1;
        Node* traverser = head;
        while (true) {
            if (counter == after && traverser->next==NULL) {
                create_node(name, id, age, gpa);
                break;
            }
            else {
                if (counter == after) {
                    Node* temp = new Node;
                    temp->name = name;
                    temp->id = id;
                    temp->age = age;
                    temp->gpa = gpa;
                    temp->name = name;
                    temp->next = traverser->next;
                    traverser->next = temp;
                    temp = NULL;
                    break;
                }
            }
            counter += 1;
            traverser = traverser->next;



        }
        display();
        return true;
    }
   
   

}


bool List::insert_before(string name, int id, int age, float gpa, int before) {
    if (!head) {
        cout << "Linked list was not present so it was inserted as first node" << endl;
        create_node(name, id, age, gpa);
        return true;
    }
    else if (head->next == NULL && tail->next == NULL && before == 1) {

        Node* temp = new Node;
        temp->name = name;
        temp->id = id;
        temp->age = age;
        temp->gpa = gpa;
        temp->name = name;
       
        temp->next = tail=head;
        head = temp;
        temp->next = tail;
        tail->next = NULL;
        
        temp = NULL;
        display();
        return true;
            
    }
    else {
        int counter = 1;
        Node* traverser = head;
        while (true) {

            if (counter == before - 1) {
                Node* temp = new Node;
                temp->name = name;
                temp->id = id;
                temp->age = age;
                temp->gpa = gpa;
                temp->name = name;
                temp->next = traverser->next;
                traverser->next = temp;
                temp = NULL;
                break;
            }
            counter += 1;
            traverser = traverser->next;
        }
        display();
        return true;
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