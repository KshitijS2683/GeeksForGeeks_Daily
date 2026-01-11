class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) {
        //  code here
        int total_cost = 0,total_gas = 0;
        for(int i = 0;i<gas.size();i++)
        {
            total_gas += gas[i];
            total_cost += cost[i];
        }
        if(total_cost > total_gas)
        {
            return -1;
        }
        int cur_gas = 0,start =0;
        for(int i = 0;i<gas.size();i++)
        {
            cur_gas += gas[i] - cost[i];
            if(cur_gas<0)
            {
                start = i+1;
                cur_gas = 0;
            }
        }
        return start;
    }
};