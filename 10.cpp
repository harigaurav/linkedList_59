//Q-Given a Singly Linked List, Delete all alternate nodes of the list ie delete all the nodes present in even positions.


//SOLUTION
class Solution {
  public:
    void deleteAlt(struct Node *head) {
        // Code here
       
        if(head==NULL){
            return;
        }
         Node*temp=head;
        while(temp!=NULL && temp->next!=NULL){
            temp->next=temp->next->next;
            temp=temp->next;
            
        }
    }
};
