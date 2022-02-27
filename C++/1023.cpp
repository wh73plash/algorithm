/*
#include "bits/stdc++.h"

using namespace std;

long long int D[ 52 ][ 130 ];

int32_t main(const int argc, const char** argv, const char** env) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	for(int i = 1; i <= 120; i++) {
		D[ 1 ][ i ] = 2;
		D[ 0 ][ i ] = 1;
	}

	D[ 0 ][ 60 ] = 0;
	D[ 1 ][ 61 ] = 1;

	for(int i = 2; i <= 50; i++) {
		for(int j = 1; j < 60; j++) {
			D[ i ][ j ] = (1ll << i);
		}
		for(int j = 60; j <= 120; j++) {
			D[ i ][ j ] = D[ i - 1 ][ j - 1 ] + D[ i - 1 ][ j + 1 ];
		}
	}

	long long int N, K;
	std::cin >> N >> K;

	if(N % 2 == 0 && K >= D[ N ][ 60 ]) {
		std::cout << "-1" << std::endl;
		return 0;
	}

	long long int cnt = 0;
	bool isFail = false;
	int prefix_score = 60;

	for(int i = 1; i <= N; i++) {
		long long int cmp_val = D[ N - i ][ prefix_score + 1 ];

		if(isFail) {
			cmp_val = 1ll << (N - i);
		} if(cnt + cmp_val > K) {
			prefix_score++;
			std::cout << "(";
		} else {
			cnt += cmp_val;
			prefix_score--;
			std::cout << ")";
		} if(prefix_score < 60) {
			isFail = true;
		}
	}

	return EXIT_SUCCESS;
}
*/