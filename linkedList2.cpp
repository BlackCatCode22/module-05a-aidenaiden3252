#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertEnd(Node** head, Node** tail, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;
    if (*head == nullptr) {
        *head = newNode;  // Changed from *head == newNode to *head = newNode
        *tail = newNode;  // Changed from *head == newNode to *head = newNode
    } else {
        (*tail)->next = newNode;  // Added *tail to access the last node's next pointer
        *tail = newNode;  // Changed from (*tail)->next = newNode to *tail = newNode
    }
}

void displayList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;  // Initialize tail pointer
    insertEnd(&head, &tail, 1);
    insertEnd(&head, &tail, 2);
    insertEnd(&head, &tail, 3);
    displayList(head);

    return 0;
} 