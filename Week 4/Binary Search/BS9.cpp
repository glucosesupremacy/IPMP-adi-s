#include <bits/stdc++.h>
using namespace std;

int maxLength(string S)
{
    int l = 0;
    for (auto c : S)
    {
        if (l == 0 || S[l - 1] < c)
        {
            S[l] = c;
            l++;
        }
        else
        {
            *lower_bound(S.begin(), S.begin() + l, c) = c; // understand this line later
        }
    }
    return l;
}