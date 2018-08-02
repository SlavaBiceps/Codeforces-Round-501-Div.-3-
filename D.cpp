#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,k,s,hag;
    long long pos[200005];
    cin >> n >> k >> s;
    if (k>s||(n-1)*k<s){
        cout << "NO";
        return 0;
    }
    pos[0] =1;
    for (int i=1;i<=k;i++){
        hag=min(n-1,s-(k-i));
        if (pos[i-1]<n){
            pos[i]=pos[i-1]+hag;
        } else {
            pos[i]=pos[i-1]-hag;
        }
        s-=hag;
    }
    cout << "YES" << endl;
    for (int i=1; i<=k; i++){
        cout << pos[i] << " ";
    }
    return 0;
}