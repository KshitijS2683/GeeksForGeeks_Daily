class Solution {
  public:
    void insertAtIndex(vector<int> &arr, int index, int val) {
        // code here
        vector<int> out;
        int k = 0;
        for(int i = 0;i<arr.size();i++)
        {
            if(i == index)
            {
                out.push_back(val);
            }
            else if(i < index)
            {
                out.push_back(arr[i]);
            }
            else
            {
                out.push_back(arr[i-1]);
            }
        }
        if(index == arr.size())
        {
            out.push_back(val);
        }
        else
        {
            out.push_back(arr[arr.size()-1]);
        }
        arr = out;
    }
};
