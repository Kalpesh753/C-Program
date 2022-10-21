// Linear Search

#include <iostream>
using namespace std;
int search(int arr[], int N, int X)
{
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == X)
        {
            cout << i;
        }
    }

    cout << -1;
}
int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int X;
    cin >> X;

    search(arr, N, X);
}