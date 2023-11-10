#include <iostream.h>
using namespace std;
// if arr[i]>arr[i+1] swap them. To place the elements in their respective position we have to perform operation N-1 times
// 0(n^2)
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }
    int counter = 0;
    while (counter < n - 1)
    {
        for (int i = 0; i < n - counter - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
