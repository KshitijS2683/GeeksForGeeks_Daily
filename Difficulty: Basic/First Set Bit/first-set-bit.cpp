class Solution {
  public:
    int findPosition(int n) {
        // code here
        int count = 0,pos = 0,out;
        while(n)
        {
            pos++;
            int a = n & 1;
            if(a == 1)
            {
                out = pos;
                count++;
            }
            n>>=1;
        }
        if(count != 1)
        {
            return -1;
        }
        return out;
    }
};