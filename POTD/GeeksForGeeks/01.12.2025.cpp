struct TrieNode {
    TrieNode* child[2] = {nullptr, nullptr};
    int count = 0;
};
class Solution {
public:
    void insert(TrieNode* root, int num) {
        TrieNode* node = root;
        for (int i = 15; i >= 0; --i) {
            int bit = (num >> i) & 1;
            if (!node->child[bit]) node->child[bit] = new TrieNode();
            node = node->child[bit];
            node->count++;
        }
    }
    int query(TrieNode* root, int num, int k) {
        TrieNode* node = root;
        int res = 0;
        for (int i = 15; i >= 0 && node; --i) {
            int nBit = (num >> i) & 1;
            int kBit = (k >> i) & 1;
            if (kBit) {
                if (node->child[nBit]) res += node->child[nBit]->count;
                node = node->child[nBit ^ 1];
            } else {
                node = node->child[nBit];
            }
        }
        return res;
    }
    int cntPairs(vector<int>& arr, int k) {
        TrieNode* root = new TrieNode();
        int ans = 0;
        for (int num : arr) {
            ans += query(root, num, k);
            insert(root, num);
        }
        return ans;
    }
};