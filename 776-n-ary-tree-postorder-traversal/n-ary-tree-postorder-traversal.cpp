/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        if(!root)return{};
stack<Node*>s1,s2;
vector<int>res;
s1.push(root);
while(!s1.empty()){
    auto cur=s1.top();s1.pop();
    s2.push(cur);
    for(auto c:cur->children)s1.push(c);
}
while(!s2.empty()){
    res.push_back(s2.top()->val);
    s2.pop();
}
return res;

    }
};