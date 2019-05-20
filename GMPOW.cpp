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
#define             c(str)                      cin >> str
#define             g(str)                     	getline (cin,str)
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
#define             sort(x)                 	sort (x.B,x.E)
#define             sortR(x,a,b)            	sort (x.B+a,x.B+b+1)
#define             rev(x)                  	reverse (x.B,x.E)
#define             revR(x,a,b)             	reverse (x.B+a,x.B+b+1)
#define             end1                        "\n"

const int MOD = 1000000007;
const int MAX = 1000005;
const double PI = acos(-1.0);

int SetBit (int n, int X) { return n | (1 << X); }
int ClearBit (int n, int X) { return n & ~(1 << X); }
int ToggleBit (int n, int X) { return n ^ (1 << X); }
bool CheckBit (int n, int X) { return (bool)(n & (1 << X)); }

int arr[1001];
int ans[10][1001],l;

int isPrime (int n)
{
    if (n == 1)
        return 0;

    for (int i=2; i*i<=n; i++)
        if (n % i == 0)
            return 0;

    return 1;
}

void getIt (int a, int n)
{
    int carry = 0, k, i, sum = 0;

    for (i=0; i<l; i++)
    {
        k = a * arr[i] + carry;
        arr[i] = k % 10;
        carry = k / 10;
        sum += arr[i];
    }

    if (!l)
        carry = a;

    while (carry)
    {
        arr[l] = carry % 10;
        carry /= 10;
        sum += arr[l++];
    }

    ans[a][n] = isPrime(sum);
}

jeno_joyer_khuda_thake
{
    /*
		freopen ("input.txt","r",stdin);
		freopen ("output.txt","w",stdout);
    */

    int tc,pos,i,j,a,n;

    for (i=2; i<10; i++)
    {
        l = 0;
        arr[0] = 1;

        for (j=1; j<=1000; j++)
            getIt(i,j);
    }

    sf ("%d",&tc);

    for (pos=1; pos<=tc; pos++)
    {
        sf ("%d %d",&a,&n);
        pf ("%d\n",ans[a][n]);
    }

    kaj_shesh;
}
