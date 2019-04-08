/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir,
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define             jeno_joyer_khuda_thake      int main (void)
#define             kaj_shesh                   return 0
#define             sf                          scanf
#define             pf                          printf
#define             ssf                         sscanf
#define             spf                         sprintf
#define             fsf                         fscanf
#define             fpf                         fprintf
#define             fast                        ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define             scase                       sf ("%d",&tc)
#define             whilecase                   while (tc--)
#define             sn                          sf ("%d",&n)
#define             eof                         while (cin >> n)
#define             pcase                       pf ("Case %d: ",pos)
#define             llu                         unsigned long long
#define             lld                         long long
#define             U                           unsigned int
#define             for0(i,n)                   for (i=0; i<n; i++)
#define             for1(i,n)                   for (i=1; i<=n; i++)
#define             forab(i,a,b)                for (i=a; i<=b; i++)
#define             rof0(i,n)                   for (i=n-1; i>=0; i--)
#define             rof1(i,n)                   for (i=n; i>=1; i--)
#define             rofab(i,a,b)                for (i=b; i>=a; i--)
#define             cinstr                      cin >> str
#define             getstr                      getline (cin,str)
#define             vi                          vector <int>
#define             vlld                        vector <lld>
#define             si                          set <int>
#define             slld                        set <lld>
#define             ss                          set <string>
#define             vs                          vector <string>
#define             pii                         pair <int,int>
#define             mii                         map <int,int>
#define             msi                         map <string,int>
#define             pb                          push_back
#define             in                          insert
#define             B                           begin()
#define             E                           end()
#define             F                           first
#define             S                           second
#define             iterate(it,x)               for (it=x.B; it!=x.E; it++)
#define             sortFull(x)                 sort (x.B,x.E)
#define             sortRange(x,a,b)            sort (x.B+a,x.B+b+1)
#define             revFull(x)                  reverse (x.B,x.E)
#define             revRange(x,a,b)             reverse (x.B+a,x.B+b+1)
#define             endl                        "\n"

const int MOD = 1000000007;
const int MAX = 1000005;
const double PI = acos(-1.0);

int SetBit (int n, int X) { return n | (1 << X); }
int ClearBit (int n, int X) { return n & ~(1 << X); }
int ToggleBit (int n, int X) { return n ^ (1 << X); }
bool CheckBit (int n, int X) { return (bool)(n & (1 << X)); }

char str[1000005];

jeno_joyer_khuda_thake
{
    /*
        freopen ("input.txt","r",stdin);
        freopen ("output.txt","w",stdout);
    */

    lld tc,pos,len,l,i,a,b,ans;
    char x;

    sf ("%lld",&tc);

    for(pos=1; pos<=tc; pos++)
    {
        sf ("%lld\n%s %c",&len,str,&x);

        vlld v;

        for (i=0; i<len; i++)
            if (str[i] == x)
                v.pb(i);

        ans = 0;
        l = v.size();

        for (i=0; i<l; i++)
        {
            if (i == 0)
                a = v[0]-0;
            else
                a = v[i]-v[i-1]-1;

            b = len-1-v[i];

            ans += 1+a+b+(a*b);
        }

        pf ("%lld\n",ans);

        v.clear();
    }

    kaj_shesh;
}
