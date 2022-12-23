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

    //-----------------------------------------------------------------------------------------------------------------
    //-----------------------------------------------------------------------------------------------------------------
    // PART ---> 1

    // ll x = 1;
    //
    // string s;
    // ll l = 0;
    // ll f = 0;
    // vector<ll> ans;
    // while (getline(cin, s))
    //{
    //    if (s.size() == 4)
    //    {
    //        l++;
    //        if (l == 20)
    //        {
    //            f = 1;
    //            ll t = 20 * x;
    //            ans.push_back(t);
    //        }
    //        else if (f == 1 && ((l - 20) % 40) == 0)
    //        {
    //            ll t = l * x;
    //            ans.push_back(t);
    //        }
    //    }
    //    else
    //    {
    //        string temp = "";
    //        fo(i, 5, s.size())
    //        {
    //            temp += s[i];
    //        }
    //        ll val = stoll(temp);
    //        l++;
    //
    //        if (l == 20)
    //        {
    //            f = 1;
    //            ll t = 20 * x;
    //            ans.push_back(t);
    //        }
    //        else if (f == 1 && ((l - 20) % 40) == 0)
    //        {
    //            ll t = l * x;
    //            ans.push_back(t);
    //        }
    //
    //        l++;
    //
    //        if (l == 20)
    //        {
    //            f = 1;
    //            ll t = 20 * x;
    //            ans.push_back(t);
    //        }
    //        else if (f == 1 && ((l - 20) % 40) == 0)
    //        {
    //            ll t = l * x;
    //            ans.push_back(t);
    //        }
    //
    //        x += val;
    //    }
    //}
    // ll sum = 0;
    //
    // for (auto it : ans)
    //{
    //    sum += it;
    //}
    //
    // cout << sum;
    
    //************************************************************************************************************************************//

    //-----------------------------------------------------------------------------------------------------------------
    //-----------------------------------------------------------------------------------------------------------------
    // PART ---> 2

    ll x = 1;

    string s;
    ll l = 0;
    ll f = 0;

    int sprite[3] = {1, 2, 3};

    vector<ll> ans;
    while (getline(cin, s))
    {
        if (s.size() == 4)
        {
            l++;
            f++;
            if (l % 40 == 0)
            {
                if (f == sprite[0] || f == sprite[1] || f == sprite[2])
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
                f = 0;
                sprite[0] = 1;
                sprite[1] = 2;
                sprite[2] = 3;
                cout << endl;
            }
            else
            {
                if (f == sprite[0] || f == sprite[1] || f == sprite[2])
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
        }
        else
        {
            string temp = "";
            fo(i, 5, s.size())
            {
                temp += s[i];
            }
            ll val = stoll(temp);

            l++;
            f++;
            if (l % 40 == 0)
            {
                if (f == sprite[0] || f == sprite[1] || f == sprite[2])
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
                f = 0;
                sprite[0] = 1;
                sprite[1] = 2;
                sprite[2] = 3;
                cout << endl;
            }
            else
            {
                if (f == sprite[0] || f == sprite[1] || f == sprite[2])
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }

            l++;
            f++;

            if (l % 40 == 0)
            {
                if (f == sprite[0] || f == sprite[1] || f == sprite[2])
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
                f = 0;
                sprite[0] = 1;
                sprite[1] = 2;
                sprite[2] = 3;
                cout << endl;
            }
            else
            {
                if (f == sprite[0] || f == sprite[1] || f == sprite[2])
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }

            x += val;
            sprite[0] = x;
            sprite[1] = x + 1;
            sprite[2] = x + 2;
        }
    }

    // MY ANSWER = FECZELHE
}