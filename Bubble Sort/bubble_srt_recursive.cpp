#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

/* This program is the bubble sort implementation
in C++ using recursion*/

void bubbleSort(vector<int> &v, int n)
{
    // Base Case
    if (n == 1)
        return;
    // sorting in a pass
    for (int i = 0; i < n - 1; i++)
    {
        // comparing the elements and swapping accordingly
        if (v[i] > v[i + 1])
        {
            swap(v[i], v[i + 1]);
        }
    }
    // recursive call for the next pass
    bubbleSort(v, n - 1);
}

int main()
{
    int n; // number of elements to be sorted
    cin >> n;
    vector<int> v; // vector of all the elements to be sorted
    for (int i = 0; i < n; i++)
    { // input all the elements
        int x;
        cin >> x;
        v.push_back(x);
    }

    bubbleSort(v, n); // calling the sort function

    cout << "Sorted Array:" << '\n'; // showing output of the sorted vector
    for (int arrayElement : v)
    {
        cout << arrayElement << " ";
    }
    cout << '\n';
    return 0;
}

/*
Input:
5
1 5 4 3 2

Output:
1 2 3 4 5
*/