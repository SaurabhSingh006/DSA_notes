#include <bits/stdc++.h>
using namespace std;

class Node {
    // This are private properties can be accessable outside the class defination 

    public:
    int data;
    Node* next;
    
    Node(int d) {
        data = d;
        next = NULL;
    }
};

void displayList(Node h) {
    Node current = h;

    while (current.next != NULL)
    {
        cout << current.data << "=>";
        current = *(current.next);
    }
};

void deleteAt(Node h, int val) {
    
};

int main() { 
    // Creating linked list using NOde
    Node head(1);
    Node l1(2);
    Node l2(3);
    Node l3(4);
    Node l4(5);
    
    head.next = &l1;
    l1.next = &l2;
    l2.next = &l3;
    l3.next = &l4;
    
    // Displaying linked list
    displayList(head);
    

    
    cout << endl << endl;
}