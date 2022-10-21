#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int a[100];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        // Betwise opretor (XOR)
        ans = ans ^ a[i];
    }
    cout << ans << endl;
}

/*
XOR Property:-
1 ^ 1=0;
1 ^ 0=1;
0 ^ 1=1;
0 ^0 =0;
*/

/*
AND Property:-
1 & 1=1;
1 & 0=0;
0 & 1=0;
0 & 0=0;
*/

/*
OR Property:-
1 || 1=1;
1 || 0=1;
0 || 1=1;
0 || 0=0;
*/