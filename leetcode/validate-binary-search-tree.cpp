        if (root->val <= low || root->val >= high) {
            ans = false;
            return;
        }

        valid(root->left, low, root->val);
        valid(root->right, root->val, high);
    }

public:
    bool isValidBST(TreeNode* root) {

        if (!root || !ans) return;
    void valid(TreeNode* root, long long low, long long high) {

    bool ans = true;
class Solution {
 */

