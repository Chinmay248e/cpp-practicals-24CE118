#include<iostream>
#include <string>
using namespace std;

// Function to compute the super digit
int superDigit(string n, int k)
{
    // Calculate the sum of the digits of n
    long long sum = 0;
    for (char digit : n)
    {
        sum += digit - '0'; // Convert char to integer and add to sum
    }
    sum *= k;

    if (sum < 10)    // Recursively calculate the super digit
    {
        // Base case: If the sum is a single digit, return it
        return sum;
    }
    else
    {
        // Convert the sum to string and recursively find the super digit
        return superDigit(to_string(sum), 1); // Only call recursively once
    }
    cout<<sum<<endl;
}

int main()
{
    string n;
    int k;

    // Read input for n and k
    cout<<"Enter number: ";
    cin>>n;

    cout<<"Enter repetation factor k: ";
    cin>>k;

    // Print the result
    int result = superDigit(n, k);
    cout << "Super Digit: " << result << endl;

    cout << "\n\n24CE118_chinmay\n\n";
    return 0;
}
