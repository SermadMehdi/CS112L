#include <iostream>
using namespace std;
int main()
{
    int s;
    cout << "Enter size of array: ";
    cin >> s;
    int *arr = new int[s];
    // taking input of array
    for (int i = 0; i < s; i++)
    {
        cout << "Enter number " << i + 1 << " of array: ";
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];
    //  minimum and maximum
    for (int i = 1; i < s; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    int secondMax = arr[0];
    int secondMin = arr[0];

    // finding second minimum and maximum 
    for (int i = 0; i < s; i++)
    {
        if (arr[i] > secondMax && arr[i] < max)
            secondMax = arr[i];
        if (arr[i] < secondMin && arr[i] > min)
            secondMin = arr[i];
    }

    delete[] arr;

    cout << "Second Lowest is: " << secondMin << endl;
    cout << "Second Highest is: " << secondMax << endl;

    return 0;
}
