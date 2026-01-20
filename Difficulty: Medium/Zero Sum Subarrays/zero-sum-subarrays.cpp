class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        // code here.
        int sum = 0,count=0;
        unordered_map<int,int> inp;
        for(int i =0;i<arr.size();i++)
        {
            sum += arr[i];
            if(sum == 0)
            {
                count++;
            }
            count += inp[sum];
            inp[sum]++;
        }
        return count;
    }
};