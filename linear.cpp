#include<iostream>
using namespace std;
int main()
{
    int arr[11];
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Print elements"<<endl;
    for(int j=0;j<n;j++)
    {
        cout<<arr[j];
    }
    int element;
    cout<<"Enter the element"<<endl;
    cin>>element;
    int value=linear(arr,n,element);
    if(value==-1)
    {
        cout<<"no";
    }
    else
    {
        cout<<"position"<<value;
    }
    return 0;
}
int linear(int a[],int m,int b)
{
    for(int i=0;i<m;i++)
    {
        if(a[i]==b)
        {
            return i;
        }
    }
}