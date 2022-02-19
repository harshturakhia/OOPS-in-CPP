#include <bits/stdc++.h>
#define lli long long int
#define ld long double
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int maxNo(int arr[], int n){
    int temp = arr[0];
    
    for(int i = 0; i<n; i++){
        temp = max(temp, arr[i]);
    }
    return temp;
    
}

int main(){
    //fastio

    //lli t;
    //cin>>t;
    //while(t--){

        int n; cin>>n;
        int a[n];

        for(int i=0; i<n; i++)cin>>a[i];

        int ans = maxNo(a, n);

        cout<<ans<<"\n";

    //}
    return 0;
}
