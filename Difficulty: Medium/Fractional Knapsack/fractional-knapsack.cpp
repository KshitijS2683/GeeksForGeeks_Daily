class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        // vector<float> valw;
        double valw;
        vector<pair<double,int>> inp;
        for(int i = 0;i<val.size();i++)
        {
            valw = (double)val[i]/wt[i];
            inp.push_back({valw,wt[i]});
        }
        sort(inp.begin(),inp.end(),greater<>());
        double value = 0;
        for(int i = 0;i<inp.size();i++)
        {
            if(capacity >= inp[i].second)
            {
                capacity -= inp[i].second;
                value += inp[i].first * inp[i].second;
            }
            else
            {
                value += inp[i].first * capacity;
                capacity = 0;
                break;
            }
        }
        return value;
    }
};
