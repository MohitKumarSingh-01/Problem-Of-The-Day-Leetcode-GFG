class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL) return {};
         vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root);
        bool flag=true;
        while(!q.empty())
        {
            int size=q.size();
            vector<int>res(size);
            for(int i=0;i<size;i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                
                int index= flag?i:size-1-i;
                res[index]=temp->val;
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
            ans.push_back(res);
            flag=!flag;
        }
        return ans;
    }
};
