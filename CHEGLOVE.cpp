/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

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
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pii pair <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MAX = 100001;
int f[MAX],s[MAX];

int main ()
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */
    int tc,n,i;
    bool x,y;

    sf ("%d",&tc);

    while (tc--)
    {
        sf ("%d",&n);

        for (i=0; i<n; i++)
            sf ("%d",&f[i]);

        for (i=0; i<n; i++)
            sf ("%d",&s[i]);

        x = y = true;

        for (i=0; i<n; i++)
        {
            if (f[i] > s[i])
            {
                x = false;
                break;
            }
        }

        for (i=0; i<n; i++)
        {
            if (f[i] > s[n-1-i])
            {
                y = false;
                break;
            }
        }

        if (x && y)
            pf ("both\n");
        else if (x && !y)
            pf ("front\n");
        else if (!x && y)
            pf ("back\n");
        else
            pf ("none\n");
    }

    return 0;
}
