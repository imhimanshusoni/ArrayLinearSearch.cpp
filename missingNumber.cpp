/*Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

Example 1:

Input:
N = 5
A[] = {1,2,3,5}
Output: 4

Example 2:

Input:
N = 10
A[] = {6,1,2,8,3,4,7,10,5}
Output: 9
*/



#include <iostream>
using namespace std;

int missingNumber(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n-1;++i)
    {
        sum += arr[i];
    }
    return (n*(n+1))/2-sum;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n-1;++i)
    {
        cin>>arr[i];
    }
    cout<<missingNumber(arr,n)<<endl;

    return 0;
}
