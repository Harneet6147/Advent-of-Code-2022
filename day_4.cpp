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
    ll ans = 0;
    while (cin >> s)
    {
        string a = "", b = "", c = "", d = "";
        int i = 0;
        for (; i < s.size(); i++)
        {
            if (s[i] == '-')
            {
                break;
            }
            a += s[i];
        }
        i++;
        for (; i < s.size(); i++)
        {
            if (s[i] == ',')
            {
                break;
            }
            b += s[i];
        }
        i++;

        for (; i < s.size(); i++)
        {
            if (s[i] == '-')
            {
                break;
            }
            c += s[i];
        }
        i++;
        for (; i < s.size(); i++)
        {
            d += s[i];
        }

        int n1, n2, n3, n4;
        n1 = stoi(a);
        n2 = stoi(b);
        n3 = stoi(c);
        n4 = stoi(d);

        if (n3 >= n1 && n3 <= n2)
        {
            ans++;
        }
        else if (n4 >= n1 && n4 <= n2)
        {
            ans++;
        }
        else if (n1 >= n3 && n1 <= n4)
        {
            ans++;
        }
        else if (n2 >= n3 && n2 <= n4)
        {
            ans++;
        }
    }
    cout << ans;
}