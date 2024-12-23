//Q-Given a singly linked list. The task is to find the length of the linked list, where length is defined as the number of nodes in the linked list.

//SOLUTION
class Solution {
  public:
    // Function to count nodes of a linked list.
    int getCount(struct Node* head) {

        // Code here
        int count=0;
        Node* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
};
