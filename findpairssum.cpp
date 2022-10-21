#include <iostream>
using namespace std;
int coutPair(int arr[], int left, int right, int n, int sum)
{
    int ans = 0;
    while (left < right)
    {
        int k;
        k = arr[left] + arr[right];
        if (k == sum)
        {
            ans++;
            left++;
            right--;
        }
        else if (k > sum)
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    if (ans == 0)
    {
        cout << -1;
    }
    cout << ans;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum;
    cin >> sum;
    int left = 0;
    int right = n - 1;
    coutPair(arr, 0, n - 1, n, sum);
}