#include<iostream>
using namespace std;

class node{
    public:
    node* next ;
    node* prev ;
    int data ;
    node(int val){
        data = val ;
        next = NULL;
        prev = NULL;
    }
};

void addstart(node* &head , int val){

    node* n = new node(val);
    n->next = head ;
    if(head!= NULL){
        head->prev = n ;
    }
    head = n ;
}

void addend(node* &head , int val){
    if (head==NULL)
    {
        addstart(head , val);
        return ;
    }
    
    node* temp = head ;
    node* n = new node(val);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n ;
    n->prev = temp ;
    
}

void display(node* head){
    node* temp = head ;
    while (temp!= NULL)
    {
        cout<< temp->data<<"->";
        temp = temp->next;
    }cout<<"NULL"<<endl;
    
}
void deletehead(node* &head){
    node* temp = head;
    temp->next->prev= NULL ;
    head = temp->next;
    delete temp ;
}

void deletion(node* &head , int pos){
    node* temp =head ;
    int count = 0 ;
    while (temp!=NULL && count!= pos)
    {
        temp= temp->next;
        count++;
    }
    node* n = temp ;
    if (pos==0){
        deletehead(head);
        return ;
    }
         temp->prev->next = temp->next;
    
    if(temp->next!=NULL){
        temp->next->prev = temp->prev ;

    }
    delete n ;
    
}

void addtopos(node* &head , int pos , int val){
    node* temp = head ;
    int count = 0 ;
    while (temp!=NULL && count!=pos)
    {   
        temp = temp->next;
        count++;
    }
    node* n = new node(val);
    temp->next->prev = n;
    n->next = temp->next;
    temp->next = n;
    n->prev = temp;
    
}

int main( )
  {
    node* head = NULL;
    addend(head ,1);
    addend(head ,2);
    addend(head ,3);
    addend(head ,4);
    addend(head ,5);
    addend(head ,6);
    addend(head ,7);
    addstart(head , 0);
    display(head);
    addtopos(head , 3 ,33);
    // deletion(head ,0 );
    display(head);

return 0 ;
}
