// Wap to show function template overloading with function

#include <iostream>

using namespace std;

template <class T>
void findMax(T *arr, int n = 5)
{
    T max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "Max: " << max;
}

void findMax(double *arr)
{
    cout << "Double ko lagi overload bhayo" << endl;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    double arr2[5] = {123,23,23,23};
    findMax(arr,5);
}