
class Solution {
  public:
    vector<int> findSum(int n) {
        // Code here
        vector<int> out= {0,0};
        for(int i =1;i<=n;i++)
        {
            if(i%2 == 0)
            {
                out[1] += i;
            }
            else
            {
                out[0] += i;
            }
            
        }
        return out;
    }
};