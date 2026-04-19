/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    virtual int fun(Node *root, int &ans){
        if(!root)
          return 0;
        int l = fun(root->left, ans);  
        int r = fun(root->right, ans);
        
        ans += (abs(l) + abs(r));
        
        return root->data + l + r - 1;
    }
  
    int distCandy(Node* root) {
        // code here
        int ans = 0;
        fun(root, ans);
        return ans;
    }
};
