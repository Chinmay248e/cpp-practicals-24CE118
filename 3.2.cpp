#include <iostream>
#include <vector>
using namespace std;

int recursive_sum(vector<int> &array, int n) //Recursive function that calculate the sum of array elements
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return array[n-1] + recursive_sum(array, n-1);
    }
}
int iterative_sum(const vector<int>& array) // Iterative function that calculate the sum of array elements
{
    int s = 0;
    for(auto& i : array)
    {
        s += i;
    }
    return s;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> array(n); //Vector that dinamically hold the elements

    for (int i = 0; i < n; ++i) //Enter input from the user
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> array[i];
    }
    //Both recursive and iterative approaches
    int recursivesum = recursive_sum(array, n);
    int iterativesum = iterative_sum(array);

    cout<<endl;
    cout << "Recursive sum is " << recursivesum << endl;
    cout << "Iterative sum is " << iterativesum << endl;

    cout << "\n\n24CE118_chinmay";
    return 0;
}
