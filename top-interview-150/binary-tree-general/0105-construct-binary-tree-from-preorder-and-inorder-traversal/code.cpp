
class Solution {
  public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder){
      unordered_map<int,int> pos;

      for(int i=0; i<inorder.size(); i++){
        pos[inorder[i]] = i ;
      }
      
      int preIndex = 0;

      return  build(preorder, 0, inorder.size() -1, preIndex, pos);

    }

    TreeNode* build(vector<int>& preorder, int left, int right, int& preIndex, unordered_map<int, int>& pos) {
      if(left>right) return nullptr;

      int rootVal = preorder[preIndex++];
      TreeNode* root = new TreeNode(rootVal);

      int mid  = pos [rootVal];

      root->left = build(preorder,  left, mid-1, preIndex, pos);
      root->right = build(preorder, mid+1, right, preIndex, pos);

      return root;
    }
}
