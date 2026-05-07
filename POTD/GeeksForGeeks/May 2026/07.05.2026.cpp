/*
Definition for Node
struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    void serialise(Node *root, string &s) {
        if(!root) {
            s += '#,';
            return;
        }
        s += to_string(root->data) + ",";
        serialise(root->left, s);
        serialise(root->right, s);
        
    } 
    bool isSubTree(Node *root1, Node *root2) {
        string s = "", t = "";
        serialise(root1, t);
        serialise(root2, s);
        
        return t.find(s) != string::npos;
        
    }
};
