class Solution {
  public:
    int transitionPoint(vector<int>& arr) {
        // code here
        int low = 0,high = arr.size()-1;
        int ans = -1;
        while(low<=high)
        {
            int mid = low + (high - low)/2;
            if(arr[mid] == 1)
            {
                if(ans == -1)
                {
                    ans = mid;
                }
                else
                {
                    ans = min(ans,mid);
                }
                high = mid -1;
            }
            else if(arr[mid] == 0)
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};