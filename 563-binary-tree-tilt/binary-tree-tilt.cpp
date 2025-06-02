/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
 public:
  int findTilt(TreeNode* root) {
    int ans = 0;
    sum(root, ans);
    return ans;
  }

 private:
  int sum(TreeNode* root, int& ans) {
    if (root == nullptr)
      return 0;

    const int l = sum(root->left, ans);
    const int r = sum(root->right, ans);
    ans += abs(l - r);
    return root->val + l + r;
  }
};