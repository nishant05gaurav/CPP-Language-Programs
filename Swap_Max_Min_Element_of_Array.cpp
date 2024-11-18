// WAP to swap the maximum and minimum number of the element:

#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {12, 75, 34, 27, 77, 97, 26};
    int maxm = INT32_MIN;    // max will be the lowest possible number available in your system 
    int minm = INT32_MAX;    // min will be the largest possible number available in your system 
    int maxm_ind = -1;
    int minm_ind = -1;

    for (int i = 0; i < 7; i++)
    {
        if (maxm <= arr[i])
        {
            maxm = arr[i];
            maxm_ind = i;
        }
    }

    for (int i = 0; i < 7; i++)
    {
        if (minm >= arr[i])
        {
            minm = arr[i];
            minm_ind = i;
        }
    }

    if (maxm_ind != -1 && minm_ind != -1)
    {
        swap(arr[maxm_ind], arr[minm_ind]);  // swapping using swap function, you can also swap using a third variable "temp"
    }

    cout << "Maximum element: " << maxm << endl;
    cout << "Minimum Element: " << minm << endl;

    for (int i = 0; i < 7; i++) // After swapping
    {
        cout << arr[i] << " ";
    }

    return 0;
}
