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

    string s;
    vll ans;
    ll sum = 0;

    while (getline(cin, s))
    {
        if (s.size() != 0)
        {
            ll n = stoll(s);
            sum += n;
        }
        else
        {
            ans.pb(sum);
            sum = 0;
        }
    }

    ans.pb(sum);

    sort(ans.rbegin(), ans.rend());

    cout << ans[0] + ans[1] + ans[2];
}