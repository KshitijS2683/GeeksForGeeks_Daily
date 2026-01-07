// User function Template for C++

class Solution {
  public:
    int minimumDays(int S, int N, int M) {
        // code here
        if((S > 6 && N*6 < M*7) || (S<=6 && N < M))
        {
            return -1;
        }
        int i = 1;
        int out = 0;
        int total_surplus = S*M;
        int cur_surplus=0;
        int cur = 0;
        while(i <= S)
        {
            if(i%7 != 0 && cur_surplus<total_surplus)
            {
                cur += N;
                cur_surplus += N;
                cur -= M;
                out++;
            }
            else
            {
                cur -= M;
            }
            if(cur < 0)
            {
                return -1;
            }
            i++;
        }
        return out;
    }
};