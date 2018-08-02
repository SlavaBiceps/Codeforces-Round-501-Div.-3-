#include<iostream>
using namespace std;

int main ()
{
    int n,m,x,y,res;
    int polosa[102];
    cin >> n >> m;
    for (int i=1; i<=m; i++) {
        polosa[i]=0;
    }
    for(int j=0; j<n; j++) {
        cin >> x >> y;
        for(int i=x; i<=y;i++) {
            polosa[i]=1;
        }
    }
    res=0;
    for(int i=1; i<=m; i++) {
        if (polosa[i]==0)
            res++;
    }
    cout << res << endl;
    for(int i=1; i<=m; i++) {
        if (polosa[i]==0)
            cout << i << ' ';
    }
}
