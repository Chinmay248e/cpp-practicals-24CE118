#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the size of the first array(n)";
    cin>>n;
     cout<<"enter the size of the first array(m)";
    cin>>m;

    int* arr1=new int[n];
    int* arr2=new int[m];

    cout<<"enter the elements for first sorted array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];

    }
     cout<<"enter the elements for second sorted array"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];

    }
   int* mergedArr = new int[n + m];

    int i = 0, j = 0, k = 0;
    while(i<n&&j<m)
    {
        if(arr1[i]<=arr2[j])
        {
            mergedArr[k++]=arr1[i++];
        }
        else
        {
            mergedArr[k++]=arr2[j++];
        }
    }
 while (i < n) {
        mergedArr[k++] = arr1[i++];
    }

    // Copy any remaining elements from arr2
    while (j < m) {
        mergedArr[k++] = arr2[j++];
    }

    // Output the merged sorted array
    cout << "Merged Sorted Array:" << endl;
    for (int idx = 0; idx < n + m; ++idx) {
        cout << mergedArr[idx] << " ";
    }
    cout << endl;

    // Free the allocated memory
    delete[] arr1;
    delete[] arr2;
    delete[] mergedArr;

    return 0;


}
