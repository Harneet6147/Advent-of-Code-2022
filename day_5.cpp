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

    vector<stack<char>> v(10);
    string s;
    while (getline(cin, s))
    {
        if (s.size() == 0)
        {
            break;
        }
    }

    v[1].push('S');
    v[1].push('M');
    v[1].push('R');
    v[1].push('N');
    v[1].push('W');
    v[1].push('J');
    v[1].push('V');
    v[1].push('T');

    v[2].push('B');
    v[2].push('W');
    v[2].push('D');
    v[2].push('J');
    v[2].push('Q');
    v[2].push('P');
    v[2].push('C');
    v[2].push('V');

    v[3].push('B');
    v[3].push('J');
    v[3].push('F');
    v[3].push('H');
    v[3].push('D');
    v[3].push('R');
    v[3].push('P');

    v[4].push('F');
    v[4].push('R');
    v[4].push('P');
    v[4].push('B');
    v[4].push('M');
    v[4].push('N');
    v[4].push('D');

    v[5].push('H');
    v[5].push('V');
    v[5].push('R');
    v[5].push('P');
    v[5].push('T');
    v[5].push('B');

    v[6].push('C');
    v[6].push('B');
    v[6].push('P');
    v[6].push('T');

    v[7].push('B');
    v[7].push('J');
    v[7].push('R');
    v[7].push('P');
    v[7].push('L');

    v[8].push('N');
    v[8].push('C');
    v[8].push('S');
    v[8].push('L');
    v[8].push('T');
    v[8].push('Z');
    v[8].push('B');
    v[8].push('W');

    v[9].push('L');
    v[9].push('S');
    v[9].push('G');

    while (getline(cin, s))
    {
        int i = 0;
        for (; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                break;
            }
        }
        string x = "", y = "", z = "";
        i++;
        while (s[i] != ' ')
        {
            x += s[i];
            i++;
        }

        i++;

        while (s[i] != ' ')
        {
            i++;
        }
        i++;
        while (s[i] != ' ')
        {
            y += s[i];
            i++;
        }

        i++;

        while (s[i] != ' ')
        {
            i++;
        }
        i++;
        while (i < s.size())
        {
            z += s[i];
            i++;
        }

        int a = stoi(x);
        int b = stoi(y);
        int c = stoi(z);
        stack<char> temp;

        while (a--)
        {
            char t = v[b].top();
            v[b].pop();
            temp.push(t);
        }
        while (!temp.empty())
        {
            char t = temp.top();
            temp.pop();
            v[c].push(t);
        }
    }

    string ans = "";
    fo(i, 1, 10)
    {
        ans += v[i].top();
    }
    cout << ans;
}