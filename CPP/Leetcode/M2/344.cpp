class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i = 0; i < s.size() / 2; i++)
            iter_swap(s.begin() + i, s.begin() + ((s.size() - 1) - i) );
    }
};