// User function Template for C++

class Solution {
  public:
    int minimumSwaps(int c[], int v[], int n, int k, int b, int T) {
        // code here
        int swaps = 0;
        int req_reach = k;
        // for(int i = 0;i<n;i++)
        // {
        //     if(v[i] * T >= (b - c[i]))
        //     {
        //         req_reach--;
        //     }
        //     if(req_reach == 0)
        //     {
        //         return 0;
        //     }
        // }
        int not_reach = -1;
        for(int i  = n-1;i>=0;i--)
        {
            if(not_reach == -1 && ((v[i] * T) >= (b - c[i])))
            {
                req_reach--;
            }
            else if(not_reach != -1 && ((v[i] * T) >= (b - c[i])))
            {
                req_reach--;
                swaps += (not_reach-i);
                not_reach--;
            }
            else if(not_reach == -1 && ((v[i] * T) < (b - c[i])))
            {
                not_reach = i;
            }
            
            if(req_reach == 0)
            {
                break;
            }
            
        }
        if(req_reach != 0)
        {
            return -1;
        }
        return swaps;
    }
};