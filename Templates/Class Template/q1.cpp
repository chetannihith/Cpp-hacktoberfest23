// WAP to find MAX value of array with default argument with class Template
#include <iostream>
using namespace std;
template <class T, int n>
class Array
{
private:
    T *arr = new T(n);

public:
    void getData()
    {
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }

    void findMax()
    {
        T max = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (max < arr[i])
            {
                max = arr[i];
            }
        }
        cout << "Max is " << max << endl;
    }
};

int main()
{
    Array<int,5> arr;
    arr.getData();
    arr.findMax();
}
