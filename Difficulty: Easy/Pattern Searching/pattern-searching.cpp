class Solution {
public:
    int search(string text, string pat) {

        if (pat.size() > text.size()) {
            return 0;
        }

        for (int i = 0; i <= (int)text.size() - (int)pat.size(); i++) {
            string temp = text.substr(i, pat.size());
            if (temp == pat) {
                return 1;
            }
        }

        return 0;
    }
};
