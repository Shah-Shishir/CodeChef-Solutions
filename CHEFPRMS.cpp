/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir,
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define ebar_khela_hoppe int main (void)
#define bair_ho return 0
#define sf scanf
#define pf printf
#define ssf sscanf
#define spf sprintf
#define fsf fscanf
#define fpf fprintf
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define vi vector <int>
#define pii pair <int,int>
#define mii map <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 201;

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

bool prime[MAX];
vi v,x;

void sieve ()
{
    int i,j,l;

    prime[0] = prime[1] = true;

    for (i=4; i<MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAX; j+=2*i)
                prime[j] = true;

    v.pb(2);

    for (i=3; i<=MAX; i+=2)
        if (!prime[i])
            v.pb(i);

    l = v.size();

    for (i=0; v[i]*v[i]<=200; i++)
    {
        for (j=i+1; v[j]<=200/v[i]; j++)
            x.pb(v[i]*v[j]);
    }

    sort (x.begin(),x.end());
    v.clear ();
}

ebar_khela_hoppe
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    sieve ();

    int tc,pos,n,i,h;
    bool b1,b2,k;

    sf ("%d",&tc);

    for (pos=1; pos<=tc; pos++)
    {
        sf ("%d",&n);

        if (n < 12)
            pf ("NO\n");
        else
        {
            h = n/2;
            k = false;

            for (i=6; i<=h; i++)
            {
                b1 = binary_search(x.begin(),x.end(),i);
                b2 = binary_search(x.begin(),x.end(),n-i);

                if (b1 && b2)
                {
                    k = true;
                    pf ("YES\n");
                    break;
                }
            }

            if (!k)
                pf ("NO\n");
        }
    }

    bair_ho;
}
