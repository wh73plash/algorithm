/*
#include "bits/stdc++.h"

using namespace std;

int dp[ 21 ][ 201 ];
int arr[ 21 ][ 2 ];

int32_t main(const int argc, const char** argv, const char** env) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, m;
	std::cin >> n >> m;
	for(int i = 1; i <= m; i++) {
		std::cin >> arr[ i ][ 0 ] >> arr[ i ][ 1 ];
	}
	for(int i = 1; i <= m; i++) {
		for(int j = 0; j <= n; j++) {
			if(j - arr[ i ][ 0 ] >= 0)
				dp[ i ][ j ] = std::max(dp[ i - 1 ][ j - arr[ i ][ 0 ] ] + arr[ i ][ 1 ], dp[ i - 1 ][ j ]);
			dp[ i ][ j ] = std::max(dp[ i - 1 ][ j ], dp[ i ][ j ]);
		}
	}
	std::cout << dp[ m ][ n ];

	return EXIT_SUCCESS;
}
*/