class Solution {
  public:
    vector<vector<int>> fourSum(vector<int> &arr, int target) {
        // code here
        int p = 0,q=arr.size()-1;
        sort(arr.begin(),arr.end());
        vector<vector<int>> output;
        set<vector<int>> out;
        for(int i = 0;i<arr.size();i++)
        {
            for(int j = i+1;j<arr.size();j++)
            {
                p = j+1;
                q = arr.size()-1;
                while(p<q)
                {
                    if(arr[i] + arr[j] + arr[p] + arr[q]  == target)
                    {
                        out.insert({arr[i],arr[j],arr[p],arr[q]});
                        p++;
                        q--;
                    }
                    else if(arr[i] + arr[j] + arr[p] + arr[q]  > target)
                    {
                        q--;
                    }
                    else
                    {
                        p++;
                    }
                }
            }
        }
        for(auto &x : out)
        {
            output.push_back(x);
        }
        return output;
    }
};