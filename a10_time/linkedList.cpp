#include <iostream>

using namespace std;

struct node{
  int data;
  node *link;
};

node *head = NULL;
node *tail = NULL;

node *getHead() {
  return head;
}

void addFrontNode(int n) {
  node *temp = new node;
  temp->data = n;

  if (head == NULL) {
    head = temp;
    tail = temp;
  } else {
    temp->link = head;
    head = temp;
  }
}

void addLastNode(int n) {
  node *temp = new node;
  temp->data = n;
  temp->link = NULL;

  if (head == NULL) {
    head = temp;
    tail = temp;
  } else {
    tail->link = temp;
    tail = temp;
  }
}

void insertNode(node *pNode, int n) {
  node *temp = new node;
  temp->data = n;
  temp->link = pNode->link;
  pNode->link = temp;
}

void deleteNode(node *pNode) {
  node *temp = pNode->link;
  pNode->link = temp->link;

  delete temp;
}

void display(node *head) {
  if (head == NULL) {
    cout << endl;
  } else {
    cout << head->data << " ";
    display(head->link);
  }
}

int main() {
  addLastNode(1);
  addLastNode(2);
  addLastNode(3);
  display(getHead());

  addFrontNode(0);

  insertNode(getHead()->link->link, 1);
  display(getHead());

  deleteNode(getHead()->link);
  display(getHead());
}