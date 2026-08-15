class Solution {
  public:
    int solve(int n, string s) {
        // code here
        int ans = 0,avl = n;
        unordered_map<char,int> inp;
        for(int i =0;i<s.size();i++)
        {
            if(inp[s[i]] == 2)
            {
                continue;
            }
            if(inp[s[i]] != 1 && avl>0)
            {
                avl--;
                inp[s[i]] = 1;
            }
            else if(inp[s[i]] == 1)
            {
                avl++;
                inp[s[i]] = 0;
            }
            else if(inp[s[i]] != 1 && avl==0)
            {
                inp[s[i]] = 2;
                ans++;
            }
        }
        return ans;
    }
};
