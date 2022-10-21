// #include <iostream>
// using namespace std;
// void printArray(int arr[], int n)
// {
//     for (int i = n - 1; i >= 0; i--)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int a[4] = {1, 2, 3, 4};
//     cout << a[0] << endl;
//     cout << a[1] << endl;
//     cout << a[2] << endl;
//     printArray(a, 4);
// }

// Find the maximum and minium element in array:-

#include <iostream>
using namespace std;
void maxmin(int a[], int size)
{
    long min = 10000000001;
    long max = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
}
int main()
{
    int a[6] = {3, 2, 1, 56, 1000, 167};
    maxmin(a, 6);
}