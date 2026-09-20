class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        // code here
        int j = 0;
        while(j+k < arr.size())
        {
            reverse(arr.begin()+j,arr.begin()+j+k);
            j += k;
        }
        reverse(arr.begin()+j,arr.end());
    }
};
