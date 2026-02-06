class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        sort(arr.begin(),arr.end());
        if(arr.size()%2 != 0)
        {
            return arr[arr.size()/2];
        }
        else
        {
            return (double)(arr[arr.size()/2] + arr[arr.size()/2 - 1])/2;
            
        }
    }
};