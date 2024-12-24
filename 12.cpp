//Q--Given a singly linked list and a number k. Find the (n/k)th element, where n is the number of elements in the linked list. We need to consider ceil value in case of decimals.







//SOLUTION--
class Solution {
  public:
    int fractional_node(struct Node *head, int k) {
        // your code here
        int ans;
        int count=0;
        Node*temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        temp=head;
        count--;
        count=ceil(count/k);
        while(count--){
            temp=temp->next;
        }
        ans=temp->data;
        return ans;
    }
};
