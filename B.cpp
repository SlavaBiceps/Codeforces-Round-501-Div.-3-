#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,pos,f;
    string s;
    string t;
    cin >> n;
    cin >> s >> t;
    vector<int> mas;
    for (int i=0; i<n; i++) {
        if (s[i]==t[i]) {
            continue;
        }
        f=0;
        for (int j=i+1; j<n; j++) {
            if (s[j]==t[i]) {
                pos=j;
                f=1;
                break;
            }
        }
        if (f==0) {
            cout << -1 << endl;
            return 0;
        }
        for (int j=pos-1; j>=i; j--) {
            std::swap(s[j], s[j + 1]);
            mas.push_back(j);
        }
    }
    cout << mas.size() << endl;
    for (int it:mas) {
        cout << it+1 << " ";
    }
    return 0;
}