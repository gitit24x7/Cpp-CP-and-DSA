//  Created by Aditya Ojha on 08/07/23.
//  Stay Focused, stay Consistent
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    //creating a constructor
    Node (int data){
        this->data= data;
        this->next= NULL;
    }
    
};

void display(Node *head){
    while(head!= NULL){
        cout<<head->data<<" ";
        head = head-> next;
        
    }
}
    
int main( ) {
    
    //creating nodes statically
    
    Node n1(11);
    Node *head = &n1;
    Node n2(22);
    Node n3(33);
    Node n4(44);

n1.next = &n2;
n2.next = &n3;
n3.next = &n4;
n4.next = NULL;
    
    //Creating nodes dynamically
    
    //Node *n5 = new Node(11);
   
    //Node *n6 = new Node(22);

    
    // insert code here...
    //std::cout << head -> data<<endl;
    
    display(head);
    
    return 0;
}
