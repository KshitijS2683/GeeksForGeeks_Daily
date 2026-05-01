
class Solution {
  public:
    string chartostr(char arr[], int n) {
        // code here
        string out;
        for(int i = 0;i<n;i++)
        {
            out.push_back(arr[i]);
        }
        return out;
    }
};