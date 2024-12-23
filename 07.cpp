//Q-Given the head of a Singly Linked List and a value x. The task is to insert the key in the middle of the linked list.

//SOLUTION
class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
        // Code Here
        Node* newNode= new Node(x);
        Node*slow =head;
        Node*fast= head;
          if(head==nullptr){
            return newNode;
        }
        while(fast->next!=NULL&&fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        newNode->next=slow->next;
        slow->next=newNode;
      //  newNode->next=slow->next->next;
        return head;
    }
};
