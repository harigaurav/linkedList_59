/*Q-Given the two singly Linked Lists respectively. The task is to check whether two linked lists are identical or not. 
Two Linked Lists are identical when they have the same data and with the same arrangement too. If both Linked Lists are
identical then return true otherwise return false. */


//SOLUTION
class Solution {
  public:
    // Function to check if two linked lists are identical
    bool areIdentical(struct Node *head1, struct Node *head2) {
        // code here
        Node*temp1=head1;
        Node*temp2=head2;
        while(temp1!=NULL&&temp1!=NULL){
            if(temp1->data!=temp2->data){
                return false;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return true;
    }
};
