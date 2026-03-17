class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        long maxi = 0;
        string s = sentences[0];
        for(auto s : sentences)
            maxi = max(maxi,count(s.begin(),s.end(),' '));
        return maxi + 1;
    }
};