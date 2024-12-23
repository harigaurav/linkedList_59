//Q-Given a linked list sorted in ascending order and an integer called key,
//insert data in the linked list such that the list remains sorted.


//SOLUTION
class Solution {
  public:
    // Should return head of the modified linked list
    Node* sortedInsert(struct Node* head, int x) {
        // Code here
        Node* newNode= new Node(x);
        if(head->data>=x){
            newNode->next=head;
            head=newNode;
        }
        else{
            Node* temp=head;
            while(temp->next!=NULL){
                if(temp->next->data>=x){
                    
                    newNode->next=temp->next;
                    temp->next=newNode;
                    
                    break;
                    
                }
                temp=temp->next;
            }
            if(temp->data<x){
                temp->next=newNode;
            }
        }
        return head;
    }
};
