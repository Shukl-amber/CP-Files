#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve(int gen, int bit, ll bits_in_this_gen) // I am assuming 0 indexed bits and generations
{
    if (gen == 1 && bit == 0)
        return 0;
    if ((gen == 1 && bit == 1) || bit == 0)
        return 1;

    ll mod_bit = (bits_in_this_gen / 4), prev_gen_half, result;

    if (bit > mod_bit && bit < (bits_in_this_gen - mod_bit))
    {
        prev_gen_half = 2;
        bit %= mod_bit;
        bit += mod_bit;
    }
    else
    {
        prev_gen_half = 1;
        bit %= mod_bit;
    }

    if (prev_gen_half == 1)
    {
        result = solve(gen - 1, bit, bits_in_this_gen / 2);
    }
    else
    {
        result = solve(gen - 1, bit, bits_in_this_gen / 2);
    }

    return result;
}

int main()
{
    int n = 5, k = 7;

    cout << solve(n, k, pow(2, n));

    return 0;
}
