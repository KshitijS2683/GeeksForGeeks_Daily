class Solution {
public:
    string smallestWindow(string &s, string &p) {

        if (p.size() > s.size()) return "";

        unordered_map<char,int> need, window;
        for (char c : p)
            need[c]++;

        int required = need.size();
        int formed = 0; 

        int left = 0, right = 0;
        int minLen = INT_MAX;
        int start = 0;

        while (right < s.size()) {

            char c = s[right];
            if (need.count(c)) {
                window[c]++;
                if (window[c] == need[c])
                    formed++;
            }

            while (left <= right && formed == required) {

                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

                char leftChar = s[left];
                if (need.count(leftChar)) {
                    window[leftChar]--;
                    if (window[leftChar] < need[leftChar])
                        formed--;
                }
                left++;
            }

            right++;
        }

        return (minLen == INT_MAX) ? "" : s.substr(start, minLen);
    }
};
