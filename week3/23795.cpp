#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    long long total = 0;
    while(cin >> n && n!= -1){
        total += n;
    }
    cout << total << endl;
    return 0;
}
