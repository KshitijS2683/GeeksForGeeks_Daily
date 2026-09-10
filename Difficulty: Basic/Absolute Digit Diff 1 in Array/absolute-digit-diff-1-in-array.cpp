class Solution {
  public:
    bool check(int a)
    {
        int temp = INT_MIN;
        while(a>0)
        {
            int b = a%10;
            a /= 10;
            if(temp == INT_MIN)
            {
                temp = b;
                continue;
            }
            else
            {
                if(abs(b - temp) != 1)
                {
                    return false;
                }
            }
            temp = b;
        }
        // for(int i = 1;i<temp.size();i++)
        // {
        //     if(abs(temp[i] - temp[i-1]) != 1)
        //     {
        //         return false;
        //     }
        // }
        return true;
    }
    vector<int> getDigitDiff1AndLessK(vector<int>& arr, int k) {
        // code here
        vector<int> out;
        for(int i = 0;i<arr.size();i++)
        {
            if(arr[i] > 9 && arr[i] < k && check(arr[i]))
            {
                out.push_back(arr[i]);
            }
        }
        return out;
    }
};