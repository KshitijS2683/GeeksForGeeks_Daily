class Solution {
  public:
    int minSum(vector<int>& arr1, vector<int>& arr2) {
        // code her
        int min1 = arr1[0],min_index1 = 0,min2 = -1,min_index2 = -1,
        min3 = arr2[0],min_index3 = 0,min4 = -1,min_index4 = -1;
        for(int i = 0;i<arr1.size();i++)
        {
            if(arr1[i] <= min1)
            {
                min2 = min1;
                min_index2 = min_index1;
                min1 = arr1[i];
                min_index1 = i;
            }
            else if(arr1[i] < min2)
            {
                min2 = arr1[i];
                min_index2 = i;
            }
            
        }
        for(int i = 0;i<arr2.size();i++)
        {
            if(arr2[i] <= min3)
            {
                min4 = min3;
                min_index4 = min_index3;
                min3 = arr2[i];
                min_index3 = i;
            }
            else if(arr2[i] < min4)
            {
                min4 = arr2[i];
                min_index4 = i;
            }

        }
        if(min_index1 != min_index3)
        {
            return min1+min3;
        }
        else
        {
            return min(min1+min4,min2+min3);
        }
    }
};
