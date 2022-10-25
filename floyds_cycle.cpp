#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void adds(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
    }

    node *temp = head;
    n->next = head;
    head = n;
}
void addend(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
// function for creating cycle

void cycle(node* &head , int p){
    node* temp = head;
    node* joint ;
    int count = 1 ;
    while (temp->next!=NULL)
    {
        if (count==p)
        {
            joint = temp ;
        }
        temp= temp->next ;
        count++;
    }
    temp->next = joint ; 
    
}

// function for detecting cycle 
bool detectcy(node* &head ){
    node* fast = head ;
    node* slow = head ;
    while (fast!=NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next ;
        if (fast == slow)
        {
            return true ;
        }
        
    } 
    return false ;   
}
// for removing cycle
void removecy(node* &head ){
    node* fast = head ;
    node* slow = head ;
    do
    {
        fast = fast->next->next;
        slow = slow->next;
    } while (fast!=slow);
    fast = head ;
    while (fast->next != slow->next)
    {
        fast = fast->next ;
        slow = slow->next ;
    }
    slow->next = NULL ;
    
}

int main( )
  {
    node *head = NULL;
    addend(head, 1);
    addend(head, 2);
    addend(head, 3);
    addend(head, 4);
    addend(head, 5);
    addend(head, 6);
    adds(head, 0);
    display(head);
    cycle(head , 4);
    cout<< detectcy(head) ;
    removecy(head);
    cout<< detectcy(head) ;
    display(head);

return 0 ;
}
