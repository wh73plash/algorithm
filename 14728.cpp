/*
#include "bits/stdc++.h"

using namespace std;

int n, t;
int k[ 101 ], s[ 101 ];
int cache[ 10001 ][ 101 ];

int GetAnswer(int remain, int idx) {
	if(idx == n) {
		return 0;
	}

	int& ret = cache[ remain ][ idx ];
	if(ret != -1) {
		return ret;
	}

	ret = GetAnswer(remain, idx + 1);

	if(remain >= k[ idx ]) {
		ret = std::max(ret, GetAnswer(remain - k[ idx ], idx + 1) + s[ idx ]);
	}

	return ret;
}

int32_t main(const int argc, const char** argv, const char** env) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::cin >> n >> t;

	for(int i = 0; i < 10001; i++) {
		std::memset(cache[ i ], -1, sizeof(int) * n);
	}

	for(int i = 0; i < n; i++) {
		std::cin >> k[ i ] >> s[ i ];
	}

	std::cout << GetAnswer(t, 0) << std::endl;

	return EXIT_SUCCESS;
}
*/