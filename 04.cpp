//Q-Given the head, the head of a singly linked list, Returns true if the linked list is circular & false if it is not circular.

//SOLUTION
class Solution {
  public:
    bool isCircular(Node *head) {
        // Your code here
         if(head==NULL){
            return true;
        }
        Node*temp=head;
        while(temp->next!=NULL){
            if(temp->next==head){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }
};
