//Q-Given a linked list. Print all the elements of the linked list separated by space followed.

//SOLUTION
class Solution {
  public:
    // Function to display the elements of a linked list
    void display(Node *head) {
        // your code goes here
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
