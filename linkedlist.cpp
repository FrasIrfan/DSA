#include <iostream>
using namespace std;

// Define the structure for a node (representing each customer)
struct Node
{
    int data;   // This holds the customer number
    Node *next; // Pointer to the next customer in line
};

// Class to manage the singly linked list
class LinkedList
{
private:
    Node *head; // Pointer to the first customer in line

public:
    LinkedList()
    {
        head = nullptr; // Start with an empty list
    }

    // Function to add a customer at the end of the line
    void insertAtEnd(int customerNumber)
    {
        Node *newNode = new Node(); // Create a new node for the customer
        newNode->data = customerNumber;
        newNode->next = nullptr;

        // If the line is empty, new customer becomes the first in line
        if (head == nullptr)
        {
            head = newNode;
            return;
        }

        // Otherwise, find the last customer and add the new one behind them
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Function to display the line of customers
    void displayList()
    {
        Node *temp = head;
        cout << "Line of customers: ";
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl; // End of the line
    }
};

int main()
{
    LinkedList line; // Our line at the food stall

    // Add customers to the line
    line.insertAtEnd(1); // Customer 1
    line.insertAtEnd(2); // Customer 2
    line.insertAtEnd(3); // Customer 3

    // Display the current line
    line.displayList(); // Output: Line of customers: 1 -> 2 -> 3 -> NULL

    return 0;
}
