/* BST Node
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    void find(Node* root,int key,vector<Node*>&ans){
      if(root==NULL) return;
      find(root->left,key,ans);
      ans.push_back(root);
      find(root->right,key,ans);
  }
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        vector<Node *>ans;
        find(root,key,ans);
        int indexS=-1;
        int indexG=-1;
        bool flag=true;
        for(int i=0;i<ans.size();i++){

            if(ans[i]->data<key){
                indexS=i;
            }
            else if(flag && ans[i]->data>key){
                indexG=i;
                flag=false;
            }
        }
        vector<Node*>final(2,nullptr);
        if(indexS!=-1){
            final[0]=ans[indexS];
        }
        if(indexG!=-1){
            final[1]=ans[indexG];
        }
        return final;
}
};
