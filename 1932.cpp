/*#include "bits/stdc++.h"

using namespace std;

int arr[ 501 ][ 501 ];
int dp[ 501 ][ 501 ] = { NULL };

int32_t main(const int argc, const char** argv, const char** env) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int n;
	std::cin >> n;
	for(size_t i = 1; i <= n; ++i) {
		for(size_t j = 1; j <= i; ++j) {
			std::cin >> arr[ i ][ j ];
		}
	}

	dp[ 1 ][ 1 ] = arr[ 1 ][ 1 ];
	for(size_t i = 2; i <= n; ++i) {
		for(size_t j = 1; j <= i; ++j) {
			dp[ i ][ j ] = std::max(dp[ i - 1 ][ j - 1 ], dp[ i - 1 ][ j ]) + arr[ i ][ j ];
		}
	}

	int max = 0;
	for(size_t i = 1; i <= n; ++i) {
		if(max < dp[ n ][ i ]) {
			max = dp[ n ][ i ];
		}
	}

	std::cout << max << std::endl;

	return EXIT_SUCCESS;
}*/