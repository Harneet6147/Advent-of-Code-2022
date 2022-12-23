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
    cin >> s;

    fo(i, 0, s.size())
    {
        if (i + 14 <= s.size())
        {
            set<char> st;
            for (ll j = i; j < i + 14; j++)
            {
                st.insert(s[j]);
            }
            if (st.size() == 14)
            {
                cout << i + 14;
                return 0;
            }
        }
    }
}