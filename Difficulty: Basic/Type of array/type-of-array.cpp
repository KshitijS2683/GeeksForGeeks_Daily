class Solution {
  public:
    int typeOfArr(vector<int>& arr) {
        // code here.
        // vector<int> temp = arr;
        // sort(temp.begin(),temp.end());
        // if(temp == arr)
        // {
        //     return 1;
        // }
        // reverse(temp.begin(),temp.end());
        // if(temp == arr)
        // {
        //     return 2;
        // }
        // bool flag = false;
        // for(int i = 1;i<arr.size();i++)
        // {
        //     if(arr[i] > arr[i-1])
        //     {
                
        //     }
            
        // }
        // else if(arr[1] > arr[0])
        // {
        //     return 4;
        // }
        // else
        // {
        //     return 3;
        // }
        int min = 0, max = 0;
        int n = arr.size();
        for(int i = 0;i<n;i++)
        {
            if(arr[min] > arr[i])
            {
                min = i;
            }
            if(arr[max] < arr[i])
            {
                max = i;
            }
        }
        if(min == 0 && max == n-1)
        {
            return 1;
        }
        if(min == n-1 && max == 0)
        {
            return 2;
        }
        if(min < max)
        {
            return 3;
        }
        return 4;
    }
};