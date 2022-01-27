/*#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

std::vector<ll> num(1000001);

int32_t main(const int argc, const char** argv, const char** env) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll min, max;
	int cnt = 0;

	std::cin >> min >> max;
	
	for ( ll i = 2; i * i <= max; ++i ) {
		ll n = min / (i * i);
		if ( min % (i * i) ) {
			++n;
		}
		while ( n * i * i <= max ) {
			num[ n * i * i - min ] = 1;
			++n;
		}
	}

	for ( size_t i = 0; i <= max - min; ++i ) {
		if ( num[ i ] == NULL ) { ++cnt; }
	}
	std::cout << cnt << std::endl;

	return EXIT_SUCCESS;
}*/