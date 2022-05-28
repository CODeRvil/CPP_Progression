#include<bits/stdc++.h>
using namespace std;

#define FORE(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FOREACH(a, b) for (auto&(a) : (b))


// This is incomplete for know!!!


int main(){
    ios_base::sync_with_stdio(false);

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        FOR(i, 0, n){
            cin>>arr[i];
        }
        if(n<3){
            cout<<"0\n";
            continue;
        }
        sort(arr, arr+n);

        // to cal frequency of no. with max frequency in an array
        int count=1, maxCount=0;
        FOR(i, 1, n){
            if(arr[i]==arr[i-1]) count++;
            else count=1;
            maxCount = max(count,maxCount);
        }
        cout<<n-maxCount<<"\n";

    }

    return 0;
}