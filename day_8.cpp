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
    
    vector<string> v;
    string s;

    while (cin >> s)
    {
        v.pb(s);
    }
    ll n = v.size();

    ll ans = -1;

    for (ll i = 1; i < n - 1; i++)
    {
        for (ll j = 1; j < n - 1; j++)
        {
            ll a = i + 1, b = i - 1, c = j + 1, d = j - 1;
            ll f1 = 0, f2 = 0, f3 = 0, f4 = 0;
            char ch = v[i][j];
            int val = ch - '0';
            ll m1 = 0, m2 = 0, m3 = 0, m4 = 0;
            while (c < n)
            {
                if ((v[i][c] - '0') >= val)
                {
                    m1++;
                    break;
                }
                m1++;
                c++;
            }

            while (d >= 0)
            {
                if ((v[i][d] - '0') >= val)
                {
                    m2++;
                    break;
                }
                m2++;
                d--;
            }

            while (a < n)
            {
                if ((v[a][j] - '0') >= val)
                {
                    m3++;
                    break;
                }
                m3++;
                a++;
            }

            while (b >= 0)
            {
                if ((v[b][j] - '0') >= val)
                {
                    m4++;
                    break;
                }
                m4++;
                b--;
            }

            ans = max(ans, m1 * m2 * m3 * m4);
        }
    }
    cout << ans;
}