// repeatedly swap two numbers if they are in wrong order
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        arr[i] = q;
    }
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0, k = j + 1; k <=i; k++, j++)
        {
            if (arr[j] > arr[k])
            {
                int temp = arr[j];
                arr[j] =arr[k] ;
                 arr[k]= temp;
            }
        } 
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }
    return 0;
}
