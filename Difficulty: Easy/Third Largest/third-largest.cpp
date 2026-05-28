class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // code here
        int first=0,second=0,third=0;
        if(arr.size() < 3)
        {
            return -1;
        }
        for(int i = 0;i<arr.size();i++)
        {
            if(arr[i] > first)
            {
                third = second;
                second = first;
                first = arr[i];
            }
            else if(arr[i] > second)
            {
                third = second;
                second = arr[i];
            }
            else if(arr[i] > third)
            {
                third = arr[i];
            }
        }
        return third;
    }
};