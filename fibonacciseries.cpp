/* Write a c++ program to print fibonacci series without using recursion and using recursion.
Input: 10
Output: 0 1 1 2 3 5 8 13 21 34 */

#include<iostream>
using namespace std;

void fibonacci(int n)
{
    int i,t1=0,t2=1,nextterm=0;
    for(i=1;i<=n;++i)
    {
        if(i==1)
        {
            cout<<t1<<" ";
            continue;
        }
        if(i==2)
        {
            cout<<t2<<" ";
            continue;
        }

        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;

        cout<<nextterm<<" ";  
    }
}
int main()
{
    int n;
    cout<<"Enter Terms: ";
    cin>>n;
    fibonacci(n);
    return 0;
}
