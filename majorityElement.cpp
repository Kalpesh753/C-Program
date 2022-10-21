// Moore's voting algorithm
#include <iostream>
using namespace std;
int majorityElement(int a[], int n)
{
    int el = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            el = a[i];
        }
        if (el == a[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (el == a[i])
        {
            count++;
        }
    }
    if (count > n / 2)
    {
        cout << el;
    }
    else
    {
        cout << -1;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    majorityElement(a, n);
}