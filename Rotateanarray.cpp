#include <iostream>
using namespace std;
void reverse(int a[], int start, int end)
{
    while (start < end)
    {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
    cout << a;
}
void rotate(int a[], int D, int N)
{
    D = D % N;
    reverse(a, 0, D - 1);
    reverse(a, D, N - 1);
    reverse(a, 0, N - 1);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, D;
        cin >> N >> D;
        int a[N];
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        rotate(a, D, N);
        for (int i = 0; i < N; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}