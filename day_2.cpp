#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fo(i, a, b) for (int i = a; i < b; i++)
#define ROF(i, a, b) for (int i = (a); i >= (b); --i)
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

int main()
{

    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    
    // A,B,C:-> rock, paper, scissor
    // X,Y,Z:-> rock, paper, scissor

    char p, q;
    ll ans = 0;
    while (cin >> p && cin >> q)
    {
        if (q == 'Y')
        {
            ans += 3;
        }
        if (q == 'Z')
        {
            ans += 6;
        }

        if (p == 'A')
        {
            if (q == 'X')
            {
                ans += 3;
            }
            else if (q == 'Y')
            {
                ans += 1;
            }
            else if (q == 'Z')
            {
                ans += 2;
            }
        }
        else if (p == 'B')
        {
            if (q == 'X')
            {
                ans += 1;
            }
            else if (q == 'Y')
            {
                ans += 2;
            }
            else if (q == 'Z')
            {
                ans += 3;
            }
        }
        else if (p == 'C')
        {

            if (q == 'X')
            {
                ans += 2;
            }
            else if (q == 'Y')
            {
                ans += 3;
            }
            else if (q == 'Z')
            {
                ans += 1;
            }
        }
    }
    cout << ans;
}