/*
#include "bits/stdc++.h"

using namespace std;

int Row, Col, D[ 752 ][ 752 ][ 2 ];

int32_t main(const int argc, const char** argv, const char** env) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int ans = 0;
	std::cin >> Row >> Col;
	for(size_t i = 1; i <= Row; ++i) {
		for(size_t j = 1; j <= Col; ++j) {
			D[ i ][ j ][ 0 ] = D[ i ][ j ][ 1 ] = std::getchar( ) - '0';
		}
		std::getchar( );
	}

	for(size_t i = Row - 1; i >= 1; i--) {
		for(size_t j = 1; j <= Col; j++) {
			D[ i ][ j ][ 0 ] *= 1 + D[ i + 1 ][ j + 1 ][ 0 ];
			D[ i ][ j ][ 1 ] *= 1 + D[ i + 1 ][ j - 1 ][ 1 ];
		}
	}

	for(size_t i = 1; i <= Row; i++) {
		for(size_t j = 1; j <= Col; j++) {
			for(size_t t = D[ i ][ j ][ 1 ] - 1; t >= ans; t--) {
				if(D[ i ][ j ][ 0 ] >= t + 1 && D[ i + t ][ j - t ][ 0 ] >= t + 1 && D[ i + t ][ j + t ][ 1 ] >= t + 1) {
					ans = t + 1;
				}
			}
		}
	}

	std::cout << ans << std::endl;

	return EXIT_SUCCESS;
}
*/