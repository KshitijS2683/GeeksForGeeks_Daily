class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        if(a==0){return b;}
        if(b==0){return a;}
        return gcd(b,a%b);
    }
    int gcd(int n, vector<int> arr) {
        // Your code goes here
        int ans = arr[0];
        for(int i = 1;i < n;i++){
            ans = gcd(ans,arr[i]);
        }
        return ans;
    }
};
