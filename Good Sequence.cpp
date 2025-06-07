#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    map<int, int> cnt;

    for ( int i = 0; i < n; i++ ) {
        cin >> a[i];
        cnt[a[i]]++;
    }

    long long ans = 0;

    for ( auto u : cnt ) {
        if ( u.second >= u.first ) ans += ( u.second - u.first );
        else ans += u.second;
    }

    cout << ans << endl;

    return 0;
}
