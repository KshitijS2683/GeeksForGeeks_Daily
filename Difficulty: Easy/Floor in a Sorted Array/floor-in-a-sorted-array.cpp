class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int low = 0,high = arr.size()-1;
        int ans = -1,ans_index = -1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(arr[mid] == x)
            {
                ans = x;
                ans_index = max(ans_index,mid);
                low = mid+1;
            }
            else if(arr[mid] > x)
            {
                high = mid -1;
            }
            else 
            {
                ans = max(ans,arr[mid]);
                ans_index = mid;
                low = mid+1;
            }
        }
        return ans_index;
    }
};
