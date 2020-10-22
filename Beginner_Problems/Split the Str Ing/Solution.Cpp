// Approach 1:-

#include <bits/stdc++.h> 
using namespace std;

bool helper(string& s,int N) {
    char word=s[N-1];
    
    for(int i=0;i<N-1;i++)
        if(s[i]==word)
            return true;
            
    return false;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        int N;
        cin>>N;
        
        string s;
        cin>>s;

        bool res=helper(s,N);
        
        if(res) 
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}