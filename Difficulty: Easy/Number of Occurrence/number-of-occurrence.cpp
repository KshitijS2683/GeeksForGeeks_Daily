class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int low = 0,high = arr.size()-1;
        int ans = -1;
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(arr[mid] == target)
            {
                ans = mid;
                break;
            }
            else if(arr[mid] < target)
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        if(ans == -1)
        {
            return 0;
        }
        int count = 0;
        int i = ans;
        while(arr[i] == target)
        {
            count++;
            i--;
        }
        i = ans+1;
        while(arr[i] == target)
        {
            count++;
            i++;
        }
        return count;
    }
};
