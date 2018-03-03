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
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pb push_back
#define in insert

int arr[1005],c[1005];

int main (void)
{
    int t,n,i,area,k;
    bool val;

    sf ("%d",&t);

    while (t--)
    {
        sf ("%d",&n);

        for (i=0; i<n; i++)
            sf ("%d",&arr[i]);

        area = 1, k = 0, val = false;
        sort (arr,arr+i);
        n--;
        memset (c,0,sizeof(c));

        for (i=n; i>=0; i--)
        {
            c[arr[i]]++;

            if (k == 2)
                break;

            if (c[arr[i]] == 2)
            {
                area *= arr[i];
                k++;
            }

            if (c[arr[i]] == 4)
            {
                area = arr[i] * arr[i];
                val = true;
                break;
            }
        }

        if (val == true)
            pf ("%d\n",area);
        else
        {
            if (k < 2)
                pf ("-1\n");
            else
                pf ("%d\n",area);
        }
    }

    return 0;
}
