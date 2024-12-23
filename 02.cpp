//Q-Given the head of a Singly Linked List and a value x, insert that value x at the end of the LinkedList and return the modified Linked List.

//SOLUTION

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
         if(head==NULL){
            return new Node(x);
         }
        Node*temp=head;
        Node*newnode=new Node(x);
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newnode;
        return head;
    }
    
};
