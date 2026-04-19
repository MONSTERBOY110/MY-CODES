/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/

class Solution {
  public:
    int Data(Node* n)
    {
        if(!n)return -1;
        return n -> data;
    }
    bool FindPalindrome(Node* p1, Node* &p2)
    {
        if(!p1)return true;
        // cout<<"Going "<<Data(p1)<<" "<<Data(p2)<<endl;
        bool ans = FindPalindrome(p1 -> next, p2);
        // cout<<"Coming "<<Data(p1)<<" "<<Data(p2)<<endl;
        ans &= (Data(p1) == Data(p2));
        p2 = p2 -> next;
        return ans;
    }
    bool isPalindrome(Node *head) {
        Node* p1 = head;
        Node* p2 = head;
        bool ans = FindPalindrome(p1, p2);
    }
};
