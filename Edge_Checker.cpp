#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	if ( ( ( b - a ) == 9 ) || ( ( b - a ) == 1 ) ) cout << "Yes" << "\n";
	else cout << "No" << "\n";

	return 0;
}