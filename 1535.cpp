/*
//백준 알고리즘 풀이를 쉽게 하기 위한 템플릿 입니다 .

#include "bits/stdc++.h"

using namespace std;

int n;
int d[ 101 ];
int lose[ 21 ];
int joy[ 21 ];

void dp(void) {
    for(int i = 1; i <= n; i++) {
        for(int j = 100; j > lose[ i ]; j--) {
            d[ j ] = std::max(d[ j ], d[ j - lose[ i ] ] + joy[ i ]);
        }
    }

    std::cout << d[ 100 ] << "\n";
}

int32_t main(const int argc, const char** argv, const char** env) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::cin >> n;
    for(size_t i = 1; i <= n; ++i) {
        std::cin >> lose[ i ];
    }
    for(size_t i = 1; i <= n; ++i) {
        std::cin >> joy[ i ];
    }

    dp( );

	return EXIT_SUCCESS;
}
*/