/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// Function to find the data of kth node from the end of a linked list.
class Solution {
  public:
    int getKthFromLast(Node *head, int k) {
        vector<int> values;

    Node* temp = head;
    while (temp != NULL) {
        values.push_back(temp->data);
        temp = temp->next;
    }

    int n = values.size();
    if (k > n || k <= 0)
       return -1;

    return values[n - k];
        
    }
};