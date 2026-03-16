/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    void find(Node *root, int &k, unordered_map<int,int>&m,int &count,int sum){
        if(!root)return;
        int path = sum+(root->data),check = path-k;
        
        if(m.count(check))count+=m[check];
        m[path]++;
        find(root->left,k,m,count,path);
        find(root->right,k,m,count,path);
        m[path]--;
        if(m[path]==0)m.erase(path);
    }
    int countAllPaths(Node *root, int k) {
        // code here
        unordered_map<int,int>m;
        int count=0;
        m[0]++;
        find(root,k,m,count,0);
        return count;
    }
};
