#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int x, y;
	cin >> x >> y;

	int cnt = 0;

	for ( int i = 1; i <= 6; i++ ) {
		for ( int j = 1; j <= 6; j++ ) {
			if ( i + j >= x ) cnt++;
			else if ( abs( i - j ) >= y ) cnt++;
		}
	}

	cout << setprecision(12) << fixed << ( cnt * 1.0 ) / 36 << "\n";

	return 0;
}