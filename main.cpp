#include<iostream>
using namespace std;
int main()
{
    int element;
    int arr[10],n,beg,en,mid;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"Enter the elements list"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched"<<endl;
    cin>>element;
    beg=0;
    en=n-1;
    while(beg<=en&&arr[mid]!=element)
    {
        if(arr[mid]<element)
        {
            beg=mid+1;
        }
        else
        {
            en=mid-1;
        }
        mid=(beg+en)/2;
    }
 if(arr[mid]==element)
 {
     cout<<"Element found"<<mid;
 }
 else
 {
     cout<<"not found";
 }
    return 0;
}
