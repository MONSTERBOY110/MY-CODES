class Solution {
  public:
    string doc;
    string u_doc;
    void append(char x) {
        doc.push_back(x);
        
    }

    void undo() {
        if(doc.size()==0) return ;
        u_doc.push_back(doc.back());
        doc.pop_back();
    }

    void redo() {
        if(u_doc.size()!=0){
            doc.push_back(u_doc.back());
            u_doc.pop_back();
        } 
    }

    string read() {
        return doc;
    }
};
