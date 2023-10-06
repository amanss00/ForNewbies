class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
         queue<TreeNode*>q;
        vector<int>v;
        if(root!=NULL)
            q.push(root);
        while(!q.empty())
        {
            int k=q.size();
            vector<int>g;
            for(int i=0;i<k;i++)
            {
                TreeNode* node=q.front();
                if(node->left!=NULL)
                    q.push(node->left);
                if(node->right!=NULL)
                    q.push(node->right);
                g.push_back(node->val);
                q.pop();
            }
            // if(g.size()>0)
            //     v.push_back(g);
            int m=*max_element(g.begin(),g.end());
            v.push_back(m);
        }
        return v;
    }
};
