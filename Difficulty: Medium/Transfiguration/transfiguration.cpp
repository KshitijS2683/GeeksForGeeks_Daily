class Solution {

  public:
    int transfigure(string A, string B) {
        // string Aa = A, Bb = B;
        // sort(Aa.begin(),Aa.end());
        // sort(Bb.begin(),Bb.end());
        map<char,int> Aa,Bb;
        int i = A.size()-1,j = B.size()-1;
        while(i>=0 && j>=0)
        {
            if(A[i] == B[j])
            {
                Aa[A[i]]++;
                Bb[B[j]]++;
                i--;
                j--;
            }
            else
            {
                Aa[A[i]]++;
                i--;
            }
        }
        int c = j;
        while(j>=0)
        {
            Bb[B[j]]++;
            j--;
        }
        if(Aa != Bb)
        {
            return -1;
        }
        return c+1;
    }
};