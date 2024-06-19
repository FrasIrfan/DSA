#include <iostream>
using namespace std;

// Define the Node structure
struct Node {
    int data;
    Node* next;

    // Constructor to initialize a node
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Define the LinkedList class
class LinkedList {
private:
    Node* head;

public:
    // Constructor to initialize the LinkedList
    LinkedList() {
        head = nullptr;
    }

    // Function to insert a new node at the end
    void append(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Function to display the list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Destructor to free the allocated memory
    ~LinkedList() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

// Main function to demonstrate LinkedList operations
int main() {
    LinkedList list;

    list.append(1);
    list.append(3);
    list.append(5);

    list.display();

    return 0;
}