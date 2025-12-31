    void postorder(TreeNode* root) {
        if (!root) return;
        postorder(root->left);    
        postorder(root->right);   
        ans.push_back(root->val); 
    }

public:
    vector<int> postorderTraversal(TreeNode* root) {
        postorder(root);
        return ans;
    vector<int> ans;
class Solution {
 */
 * };
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    }

