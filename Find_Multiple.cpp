#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	int val = c;

	bool isPos = false;

	while ( val <= b ) {
		if ( val >= a && val <= b ) isPos = true;
		else val += c;

		if ( isPos || val > b ) break;
	}

	if ( isPos ) cout << val << "\n";
	else cout << -1 << "\n";

	return 0;
}