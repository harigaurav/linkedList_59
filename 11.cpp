//Q--Given a single linked list, calculate the sum of the last n nodes.

//Note: It is guaranteed that n <= number of nodes.




//solution-
class Solution {
  public:

    int sumOfLastN_Nodes(struct Node* head, int n) {
        // Code here
        Node*temp=head;
        int sum=0;
        while(temp!=NULL){
            sum+=temp->data;
            temp=temp->next;
            n--;
            if(n<0){
                sum-=head->data;
                head=head->next;
            }
        }
        return sum;
    }
};
