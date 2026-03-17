class Solution
{
public:
    bool isPalindrome(int x1)
    {
        string x = to_string(x1);
        int size = x.size();
        for (int i = 0; i <= size / 2; i++)
            if (x[i] != x[(size - i) - 1])
                return false;
        return true;
    }
};