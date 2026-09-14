class Solution {
  public:
    vector<int> customSort(vector<int>& arr) {
        // code here
        if(arr.size()%2 == 0)
        {
            sort(arr.begin(),arr.begin() + (arr.size()+1)/2);
            sort(arr.begin() + (arr.size()+1)/2,arr.end());
            reverse(arr.begin() + (arr.size()+1)/2,arr.end());
        }
        else
        {
            sort(arr.begin(),arr.begin() + arr.size()/2);
            sort(arr.begin() + (arr.size()/2) ,arr.end());
            reverse(arr.begin() + (arr.size()/2),arr.end());
            
        }
        return arr;
    }
};