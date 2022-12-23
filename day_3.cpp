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

    string s1, s2, s3;
    ll ans = 0;
    string x = "000000000000000000000000000ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while (cin >> s1 && cin >> s2 && cin >> s3)
    {
        set<char> st1, st2, st3;

        fo(i, 0, s1.size())
        {
            st1.insert(s1[i]);
        }

        fo(i, 0, s2.size())
        {
            st2.insert(s2[i]);
        }

        fo(i, 0, s3.size())
        {
            st3.insert(s3[i]);
        }

        for (auto it : st1)
        {
            if (st2.find(it) != st2.end() && st3.find(it) != st3.end())
            {
                char ch = it;
                if (isupper(ch))
                {
                    fo(i, 0, x.size())
                    {
                        if (x[i] == ch)
                        {
                            ans += i;
                        }
                    }
                    break;
                }
                else
                {
                    ans += (ch - 'a' + 1);
                    break;
                }
            }
        }
    }
    cout << ans;
}