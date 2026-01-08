// User function Template for C++

class Solution {
  public:
    int pageFaults(int N, int C, int pages[]) {
        // code here
        map<int,int> lru;
        int c = 0,min_value = INT_MAX,min_key=INT_MAX,page_faults = 0;
        for(int i = 0;i<N;i++)
        {
            if(lru.find(pages[i]) != lru.end())
            {
                lru[pages[i]] = i;
            }
            else if(c < C && lru.find(pages[i]) == lru.end())
            {
                lru[pages[i]] = i;
                c++;
                page_faults++;
            }
            else
            {
                page_faults++;
                for(auto &k : lru)
                {
                    if(k.second < min_value)
                    {
                        min_value = k.second;
                        min_key = k.first;
                    }
                }
                lru.erase(min_key);
                lru[pages[i]] = i;
                min_value = INT_MAX;
                min_key=INT_MAX;
            }
        }
        return page_faults;
    }
};