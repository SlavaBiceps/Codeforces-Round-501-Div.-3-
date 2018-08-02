#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int sum,minsum,k,res;
    int n,m;
    int a[100002];
    int b[100002];
    int newr[100002];
    cin >> n >> m;
    sum=0;
    minsum=0;
    res=0;
    for (int i=0; i<n; i++) {
        cin >> a[i] >> b[i];
        minsum+=b[i];
        sum+=a[i];
        newr[i]=a[i]-b[i];
    }
    if(minsum>m){
        cout << -1 << endl;
        return 0;
    }
    sort(newr,newr+n);
    k=n-1;
    while(sum>m) {
        sum-=newr[k];
        res++;
        k--;
    }
    cout << res << endl;
    return 0;
}