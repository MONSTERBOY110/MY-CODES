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
    int minTime(Node* root, int target) {
        // code here
        unordered_map<Node*, Node*> parent;
        queue<Node*> q;
        q.push(root);

        Node* targetNode = NULL;

        while (!q.empty()) {
            Node* curr = q.front();
            q.pop();
            if (curr->data == target) {
                targetNode = curr;
            }
            if (curr->left) {
                parent[curr->left] = curr;
                q.push(curr->left);
            }
            if (curr->right) {
                parent[curr->right] = curr;
                q.push(curr->right);
            }
        }
        unordered_map<Node*, bool> visited;
        queue<Node*> burnQ;

        burnQ.push(targetNode);
        visited[targetNode] = true;

        int time = 0;

        while (!burnQ.empty()) {
            int size = burnQ.size();
            bool spread = false;

            for (int i = 0; i < size; i++) {
                Node* curr = burnQ.front();
                burnQ.pop();
                if (curr->left && !visited[curr->left]) {
                    visited[curr->left] = true;
                    burnQ.push(curr->left);
                    spread = true;
                }
                if (curr->right && !visited[curr->right]) {
                    visited[curr->right] = true;
                    burnQ.push(curr->right);
                    spread = true;
                }
                if (parent[curr] && !visited[parent[curr]]) {
                    visited[parent[curr]] = true;
                    burnQ.push(parent[curr]);
                    spread = true;
                }
            }
            if (spread) time++;
        }

        return time;
    }
};
