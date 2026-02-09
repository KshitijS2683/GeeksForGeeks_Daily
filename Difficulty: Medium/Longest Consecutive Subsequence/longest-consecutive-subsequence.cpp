class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        int count = 1,max_count = 0;
        sort(arr.begin(),arr.end());
        for(int i = 1;i<arr.size();i++)
        {
            if(arr[i] == arr[i-1] + 1)
            {
                count++;
            }
            else if(arr[i] == arr[i-1])
            {
                continue;
            }
            else
            {
                max_count = max(count,max_count);
                count = 1;
            }
        }
        max_count = max(count,max_count);
        return max_count;
    }
};