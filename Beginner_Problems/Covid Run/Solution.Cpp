// Approach 1:-

#include <bits/stdc++.h> 
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n,k,x,y;
        cin>>n>>k>>x>>y;
        
        unordered_set<int> store;
        int pos=x;
        int flag=0;
        while(store.find(pos)==store.end()) {
            store.insert(pos);
            pos= (pos+k)%n;
            if(pos==y) {
                flag=1;
                break;
            }
        }
        
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}