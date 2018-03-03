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

int main (void)
{
    int arr[12] = {1,2,4,8,16,32,64,128,256,512,1024,2048};
    int n,i,p,div;

    cin >> n;

    while (n--)
    {
        cin >> p;

        div = 0;

        for (i=11; i>=0; i--)
        {
            if (p >= arr[i])
            {
                div += p/arr[i];

                if (p % arr[i] == 0)
                    break;
                else
                    p -= ((p / arr[i]) * arr[i]);
            }
        }

        cout << div << endl;
    }

    return 0;
}
