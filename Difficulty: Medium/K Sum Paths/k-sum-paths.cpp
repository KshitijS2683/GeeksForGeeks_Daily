class Solution {
  public:
    int countPaths(Node* root, int k, int currentSum, unordered_map<int,int>& freq)
    {
        if(root == NULL) return 0;
        
        currentSum += root->data;
        
        // if currentSum - k exists as a prefix, those paths sum to k
        int count = freq[currentSum - k];
        
        freq[currentSum]++;  // add current prefix sum
        
        count += countPaths(root->left,  k, currentSum, freq);
        count += countPaths(root->right, k, currentSum, freq);
        
        freq[currentSum]--;  // backtrack
        
        return count;
    }
    
    int countAllPaths(Node* root, int k) {
        unordered_map<int,int> freq;
        freq[0] = 1;  // empty path with sum 0
        return countPaths(root, k, 0, freq);
    }
};