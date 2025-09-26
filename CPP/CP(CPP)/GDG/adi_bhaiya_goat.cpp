#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve(int gen, int bit, ll bits_in_this_gen) // I am assuming 1 indexed bits and 0 indexed generation
{
    if (gen == 0)
        return 1;
    if (gen == 1 && bit == 1)
        return 1;
    if (gen == 1 && bit == 2)
        return 0;

    ll half = bits_in_this_gen / 2;
    ll prev_gen_half, result;

    if (bit > half)
    {
        prev_gen_half = 2;
        bit -= half;
    }
    else
    {
        prev_gen_half = 1;
    }

    if (prev_gen_half == 1)
    {
        result = solve(gen - 1, bit, bits_in_this_gen / 2);
    }
    else
    {
        result = 1 - solve(gen - 1, bit, bits_in_this_gen / 2);
    }

    return result;
}

int main()
{

    for (int n = 0; n < 6; n++)
    {
        for (int k = 1; k <= pow(2, n); k++)
            cout << solve(n, k, pow(2, n)) << " ";
        cout << endl;
    }
    return 0;
}
