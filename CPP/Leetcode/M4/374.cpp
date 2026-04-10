class Solution
{
public:
    int guessNumber(int n)
    {
        long long l = 1, mid;
        while (true)
        {
            mid = (l + n) / 2;
            switch (guess(mid))
            {
            case 0:
                return mid;
                break;
            case 1:
                l = mid + 1;
                break;
            case -1:
                n = mid - 1;
                break;
            }
        }
    }
};