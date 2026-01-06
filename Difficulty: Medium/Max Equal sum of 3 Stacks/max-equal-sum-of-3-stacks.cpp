// User function Template for C++

class Solution {
  public:
    int maxEqualSum(int N1, int N2, int N3, vector<int> &S1, vector<int> &S2,
                    vector<int> &S3)
    {
        reverse(S1.begin(),S1.end());
        reverse(S2.begin(),S2.end());
        reverse(S3.begin(),S3.end());
        int i = 0,j=0,k=0;
        long long sum1 =0,sum2=0,sum3=0;
        while(i<N1 || j<N2 || k<N3)
        {
            if(i<N1)
            {
                sum1 += S1[i++];
            }
            if(j<N2)
            {
                sum2 += S2[j++];
            }
            if(k<N3)
            {
                sum3 += S3[k++];
            }
        }
        while(sum1 != sum2 || sum1 != sum3)
        {
            if(sum1>=sum2 && sum1>=sum3)
            {
                sum1 -= S1.back();
                S1.pop_back();
            }
            else if(sum2 >= sum1 && sum2 >= sum3)
            {
                sum2 -= S2.back();
                S2.pop_back();
            }
            else if(sum3 >= sum2 && sum3 >= sum2)
            {
                sum3 -= S3.back();
                S3.pop_back();
            }
        }
        return sum1;
    }
};