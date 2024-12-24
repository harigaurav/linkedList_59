//Q--You are given the head of a Linked List. You have to move the last element to the front of the Linked List and return the head the modified linked list.

//SOLUTION
class Solution {
  public:
    Node *moveToFront(Node *head) {
        // code here
        Node*temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        Node*newhead;
        newhead=temp->next;
        temp->next=nullptr;
        newhead->next=head;
        head=newhead;
        return head;
    }
};
