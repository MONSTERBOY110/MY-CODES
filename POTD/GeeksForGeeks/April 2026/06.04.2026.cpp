class Solution {
  public:
    
    struct Node {
        int freq;
        int idx;
        Node* left;
        Node* right;
        
        Node(int f, int i) {
            freq = f;
            idx = i;
            left = right = NULL;
        }
    };
    
    struct Compare {
        bool operator()(Node* a, Node* b) {
            if (a->freq == b->freq)
                return a->idx > b->idx;
            
            return a->freq > b->freq;
        }
    };
    
    void buildCodes(Node* root, string code, vector<string>& ans) {
        if (!root) return;
        
        if (!root->left && !root->right) {
            ans.push_back(code);
            return;
        }
        
        buildCodes(root->left, code + "0", ans);
        buildCodes(root->right, code + "1", ans);
    }
    
    vector<string> huffmanCodes(string &s, vector<int> f) {
        priority_queue<Node*, vector<Node*>, Compare> pq;
        
        int n = s.size();
        
        for (int i = 0; i < n; i++) {
            pq.push(new Node(f[i], i));
        }
        
        if (n == 1) return {"0"};
        
        while (pq.size() > 1) {
            Node* left = pq.top();
            pq.pop();
            
            Node* right = pq.top();
            pq.pop();
            
            Node* parent = new Node(
                left->freq + right->freq,
                min(left->idx, right->idx)
            );
            
            parent->left = left;
            parent->right = right;
            
            pq.push(parent);
        }
        
        vector<string> ans;
        buildCodes(pq.top(), "", ans);
        
        return ans;
    }
};
