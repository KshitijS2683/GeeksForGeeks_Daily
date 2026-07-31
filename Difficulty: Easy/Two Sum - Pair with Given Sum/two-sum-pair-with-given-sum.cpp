class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        unordered_map<int, int> inp;

        for (int i = 0; i < arr.size(); i++) {
            inp[arr[i]]++;
        }

        for (auto& x : inp) {
            if (x.first + x.first == target && x.second >= 2) {
                return true;
            }
            else if (target - x.first != x.first &&
                     inp.find(target - x.first) != inp.end()) {
                return true;
            }
        }

        return false;
    }
};