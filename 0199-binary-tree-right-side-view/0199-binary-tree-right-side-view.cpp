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
    vector<int> rightSideView(TreeNode* root) {
                vector<int>d;

        if(root==nullptr)
        return d;
        queue<TreeNode*>st;
        st.push(root);
        st.push(nullptr);
        while(!st.empty())
        {
            TreeNode *curr=st.front();
            st.pop();
            if(curr==nullptr)
            {
                if(!st.empty())
                {
                      st.push(nullptr);
                      continue;
                }
                else
                {
                    break;
                }
            }
          if(st.front()==nullptr)
          d.push_back(curr->val);
            if(curr->left!=nullptr)
            {
        st.push(curr->left);
            }
            if(curr->right!=nullptr)
            {
        st.push(curr->right);
            }
        }
return d;
    }









};