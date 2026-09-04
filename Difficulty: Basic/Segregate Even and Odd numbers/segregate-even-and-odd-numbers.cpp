class Solution {
  public:
    void segregateEvenOdd(vector<int>& arr) {
        // code here
        vector<int> even,odd;
        for(int i = 0;i<arr.size();i++)
        {
            if(arr[i]%2 == 0)
            {
                even.push_back(arr[i]);
            }
            else
            {
                odd.push_back(arr[i]);
            }
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        int k = 0;
        for(int i = 0;i<even.size();i++)
        {
            arr[k++] = even[i];
        }
        for(int i = 0;i<odd.size();i++)
        {
            arr[k++] = odd[i];
        }
    }
};