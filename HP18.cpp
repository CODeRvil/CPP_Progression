#include<bits/stdc++.h>
using namespace std;

#define FORE(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FOREACH(a, b) for (auto&(a) : (b))

int main(){
    ios_base::sync_with_stdio(false);

    int t; cin>>t;
    while(t--){
        int n, a, b; cin>>n>>a>>b;
        long int arr[n];
        FOR(i, 0, n) cin>>arr[i];

        // bob wins only when there are more multiples of 'a' in the arr.
        int flagA=0, flagB=0;
        // if a and b are equal, then bob wins always
        if(a==b) cout<<"BOB\n";
        else{
            FOR(i, 0, n){
                if(arr[i]%a==0) flagA++;
                else if(arr[i]%b==0) flagB++;
            }
            if(flagA>flagB) cout<<"BOB\n";
            else cout<<"ALICE\n";
        }
    }

    return 0;
}