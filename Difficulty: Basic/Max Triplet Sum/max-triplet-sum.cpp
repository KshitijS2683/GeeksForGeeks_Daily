class Solution {
  public:
    int maxTripletSum(vector<int> &arr) {
        // Code Here
        int first = INT_MIN,second = INT_MIN,third = INT_MIN;
        if(arr.size() < 3)
        {
            return -1;
        }
        for(int i = 0;i<arr.size();i++)
        {
            if(first == INT_MIN)
            {
                first = arr[i];
            }
            else if(arr[i] >= first)
            {
                third = second;
                second = first;
                first = arr[i];
            }
            else if(arr[i] >= second)
            {
                third = second;
                second = arr[i];
            }
            else if(arr[i] > third)
            {
                third = arr[i];
            }
        }
        return first+second+third;
        
    }
};