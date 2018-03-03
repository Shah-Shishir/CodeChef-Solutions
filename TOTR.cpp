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

int search (string str, char ch)
{
    for (int i=0; i<26; i++)
        if (str[i] == ch)
            return i;
}

int main (void)
{
    int t,len,i,pos;
    string s1,s2,str,down="",up="";

    for (i=0; i<26; i++)
    {
        down += (i+97);
        up += (i+65);
    }

    cin >> t >> s1;

    s2 = s1;

    for (i=0; i<26; i++)
        s2[i] = toupper(s2[i]);

    while (t--)
    {
        cin >> str;

        len = str.length();

        for (i=0; i<len; i++)
        {
            if (isalpha(str[i]))
            {
                if (islower(str[i]))
                {
                    pos = search (down,str[i]);
                    cout << s1[pos];
                }
                else
                {
                    pos = search (up,str[i]);
                    cout << s2[pos];
                }
            }
            else
            {
                if (str[i] == '_')
                    pf (" ");
                else
                    cout << str[i];
            }
        }

        cout << '\n';
    }

    return 0;
}
