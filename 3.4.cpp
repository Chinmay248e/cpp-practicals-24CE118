#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T> // Template function that find the maximum value in a vector
T findmax(const vector<T> &vec)
{
    T maxVal = vec[0];
    for (const auto &elem : vec)
    {
        if (elem > maxVal)
        {
            maxVal = elem;
        }
    }
    return maxVal;
}

template <typename T> // Template function that reverse a vector
void reversevac(vector<T> &vec)
{
    reverse(vec.begin(), vec.end());
}

template <typename T> // Template function that display the contents of a vector
void displayvector(const vector<T> &vec)
{
    for (const auto &elem : vec)
    {
        cout << elem << " ";
    }
    cout << endl;
}

int main()
{
    // --------------------Integer vector-----------------------------
    vector<int> intvac = {1, 20, 3, 4, 5};
    cout << "Integer Vector: ";
    displayvector(intvac);

    cout << "Maximum integer vector: " << findmax(intvac) << endl;
    reversevac(intvac);

    cout << "Reversed Integer Vector: ";
    displayvector(intvac);

    // --------------------Double vector------------------------------
    vector<double> doublevac = {9.8, 9.9, 1.18};
    cout << endl
         << "Double Vector: ";

    displayvector(doublevac);

    cout << "Maximum double vector: " << findmax(doublevac) << endl;
    reversevac(doublevac);

    cout << "Reversed Double Vector: ";
    displayvector(doublevac);

    // -------------------Character vector----------------------------
    vector<char> charvac = {'c', 'h', 'i', 'n', 'm', 'a','y'};

    cout << endl
         << "Character Vector: ";

    displayvector(charvac);

    cout << "Maximum character vector: " << findmax(charvac) << endl;
    reversevac(charvac);

    cout << "Reversed Character Vector: ";
    displayvector(charvac);

    cout << "\n\n24CE118_chinmay\n\n";
    return 0;
}
