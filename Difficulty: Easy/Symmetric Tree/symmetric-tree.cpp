/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
  bool isSym(Node*p,Node*q){
      if(p == NULL && q == NULL) return true;
      if(p == NULL || q == NULL) return false;
      if(p -> data != q -> data) return false;
      return isSym(p -> left,q -> right) && isSym(p -> right,q -> left);
  }
    bool isSymmetric(Node* root) {
        return isSym(root,root);
    
        
    }
};