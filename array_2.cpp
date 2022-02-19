#include<iostream>
#include<climits>
using namespace std;

int maxNo(int n);
int main()
{
    int n; 
    cout<<"Enter limit : ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Entered number are : "; 
    for(int i=0; i<n; i++)
    {   
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    
    int maxNo=INT_MIN;
    int minNo=INT_MAX;

    for(int i=0; i<n; i++)
    {
        if(arr[i]>maxNo)
        {
            maxNo = arr[i];
        }
        else if(arr[i]<minNo)
        {
            minNo = arr[i];
        }
    }
    cout<<"Max number is : ";
    cout<<maxNo<<endl;
    cout<<"Min number is : ";
    cout<<minNo<<endl;
}

    // 2nd way of thsi loop

//     for(int i=0; i<n; i++)
//     {
//         maxNo=max(maxNo,arr[i]);
//         minNo=min(minNo,arr[i]);
//     }
//     cout<<"Max number is : ";
//     cout<<maxNo<<endl;
//     cout<<"Min number is : ";
//     cout<<minNo<<endl;
// }



