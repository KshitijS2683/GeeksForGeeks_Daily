// User function Template for C++

class Solution {
  public:
    void check(int arr[], int &i, int min,int max, int N)
    {
        if(i >= N)
        {
            return;
        }
        if(arr[i] < min || arr[i] > max)
        {
            return;
        }
        int curr = arr[i++];
        check(arr,i,min,curr,N);
        check(arr,i,curr,max,N);
        
    }
    int canRepresentBST(int arr[], int N) {
        // code here
        int i  = 0;
        int min = -1;
        int max = INT_MAX;
        check(arr,i,min,max,N);
        
        return i>=N;
    }
};