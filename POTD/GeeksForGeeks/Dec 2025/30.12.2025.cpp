/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* addTwoLists(Node* head1, Node* head2) {
        // code here
          Node* prv1 = NULL;
        Node* curr1 = head1;
        Node* prv2 = NULL;
        Node* curr2 = head2;
        
        while (curr1->next != NULL) {
            Node* tem = curr1->next;
            curr1->next = prv1;
            prv1 = curr1;
            if (tem!=NULL) curr1 = tem;
        }
        curr1->next = prv1;
        
        while (curr2->next != NULL) {
            Node* tem = curr2->next;
            curr2->next = prv2;
            prv2 = curr2;
            if (tem!=NULL) curr2 = tem;
        }
        curr2->next = prv2;
        
        // cout << curr1->next->data << ' ' << curr2->next->data << '\n';
        
        string res = "";
        int carry=0;

        while (curr1 != NULL && curr2 != NULL) {
            int x = curr1->data;
            int y = curr2->data;
            
            // cout << x << ' ' << y << '\n';
            
            int num = x+y;
            num += carry;
            res = to_string(num%10) + res;
            carry = num/10;
            
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        
        while (curr1 != NULL) {
            int x = curr1->data;

            int num = x;
            num += carry;
            res = to_string(num%10) + res;
            carry = num/10;
            
            curr1 = curr1->next;
        }
        
        while (curr2 != NULL) {
            int x = curr2->data;

            int num = x;
            num += carry;
            res = to_string(num%10) + res;
            carry = num/10;
            
            curr2 = curr2->next;
        }
        
        if (carry) {
            res = to_string(carry) + res;
            carry=0;
        }
        
        // cout << res << '\n';
        int j=0;
        while (res[j]=='0') j++;
        
        Node* ans = new Node(res[j++]-'0');
        Node* cur = ans;
        
        while (j<res.size()) {
            Node* tem = new Node(res[j++]-'0');
            cur->next = tem;
            cur = tem;
        }
        
        return ans;
    }
};
