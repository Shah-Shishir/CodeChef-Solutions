/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir,
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define ebar_khela_hoppe    int main (void)
#define bair_ho             return 0
#define sf                  scanf
#define pf                  printf
#define ssf                 sscanf
#define spf                 sprintf
#define fsf                 fscanf
#define fpf                 fprintf
#define fast                ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase               sf ("%d",&tc)
#define sn                  sf ("%d",&n)
#define whilecase           while (tc--)
#define eof                 while (cin >> n)
#define forloop             for (pos=1; pos<=tc; pos++)
#define arrayloop           for (i=0; i<n; i++)
#define cinstr              cin >> str
#define getstr              getline (cin,str)
#define pcase               pf ("Case %d: ",pos)
#define vi                  vector <int>
#define si                  set <int>
#define vs                  vector <string>
#define pii                 pair <int,int>
#define mii                 map <int,int>
#define pb                  push_back
#define in                  insert
#define llu                 unsigned long long
#define lld                 long long
#define U                   unsigned int
#define endl                "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

ebar_khela_hoppe
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    int l1,l2,l,i,d,p,q,k,r,m;
    string a,b,x,ans;

    while (cin >> a >> b)
    {
        l1 = a.size(), l2 = b.size();

        m = b[l2-1]-'0';

        if (l1 >= l2)
        {
            d = l1-l2;

            for (i=1; i<=d; i++)
                x.pb('0');

            b = x+b;
        }
        else
        {
            d = l2-l1;

            for (i=1; i<=d; i++)
                x.pb('0');

            a = x+a;
        }

        if (a < b)
            swap (a,b);
        k = 0;
        l = max (l1,l2);

        for (i=l-1; i>=0; i--)
        {
            p = a[i]-'0';
            q = b[i]-'0'+k;

            if (p < q)
            {
                r = 10-q+p;
                k = 1;
            }
            else
            {
                r = p-q;
                k = 0;
            }

            ans.pb(r+'0');

            //cout << p << " " << q << " " << r << endl;
        }

        reverse (ans.begin(),ans.end());

        k = 0;

        //cout << a << endl << b << endl;

        for (i=0; i<l; i++)
        {
            if (ans[i] != '0')
                k = 1;

            if (k)
                cout << ans[i];
        }

        cout << endl;

        if (m & 1)
            cout << "odd";
        else
            cout << "even";

        cout << endl;

        ans.clear();
        x.clear();
    }

    bair_ho;
}
