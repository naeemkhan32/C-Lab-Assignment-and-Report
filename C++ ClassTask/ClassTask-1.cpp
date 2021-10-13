#include<iostream>
using namespace std;

struct Node{
int data;
Node *next;
};

struct CircularLinkedList{
Node *head;
int nodeCount;

CircularLinkedList();
void insertAtEnd(int data);
void display();
};

CircularLinkedList :: CircularLinkedList()
{
head = NULL;
nodeCount = 0;
}

void CircularLinkedList :: insertAtEnd(int data)
{
//cout << data << endl;
Node *n = new Node();

n->data = data;
n->next = head;

if(head == NULL){
head = n;
}
else{
Node *x = head;

while(x->next != head){
cout << "a" << endl;
x = x->next;
}
x->next = n;
n->next = head;
}
nodeCount++;
}

void CircularLinkedList :: display()
{
Node *x = head;

while(x != head){
cout << x->data << endl;
x = x->next;
}
}

int main()
{
CircularLinkedList cll;

cll.insertAtEnd(10);
cll.insertAtEnd(20);
cll.insertAtEnd(30);
cll.insertAtEnd(40);
cll.insertAtEnd(50);

cll.display();

return 0;
}

