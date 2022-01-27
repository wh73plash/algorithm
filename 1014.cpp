/*#include <bits/stdc++.h>

using namespace std;

int bitmask[ 10 ][ 1 << 10 ];
char board[ 10 ][ 10 ];

void dfs(std::vector<std::string>& lines, int(&dfsArray)[ 10 ], int index, int& n) {
	if ( n == index ) {
        std::string buffer;
        for (const auto &i: dfsArray) {
            buffer += std::to_string(i);
        }
        lines.push_back(buffer);
        return;
    }
	dfsArray[ index ] = NULL;
	dfs(lines, dfsArray, index + 1, n);

	if ( NULL < index && dfsArray[ index - 1 ] != NULL ) {
		return;
	} else {
		dfsArray[ index ] = 1;
		dfs(lines, dfsArray, index + 1, n);
	}
	return;
}

int dp(std::vector<std::string>& lines, int lineN, int pcbits, int& n, int& m) {
	if ( n == lineN ) {
		return EXIT_SUCCESS;
	} else if ( -1 < bitmask[ lineN ][ pcbits ] ) {
		return bitmask[ lineN ][ pcbits ];
	}

	int ret = NULL;
	for ( const auto& i : lines ) {
		int bits = NULL, cnt = 0;

		for ( size_t itr = NULL; itr < m; ++itr ) {
			if ( '0' == i[ itr ] || 'x' == board[ lineN ][ itr ] || (0 < itr && pcbits & (1 << (itr - 1))) ) {
				continue;
			} else if ( itr < m && pcbits & (1 << (itr + 1)) ) {
				continue;
			}

			++cnt;
			bits |= (1 << itr);
		}
		ret = std::max(ret, dp(lines, lineN + 1, bits, n, m) + cnt);
	}
	bitmask[ lineN ][ pcbits ] = ret;
	return ret;
}

int32_t main(const int argc, const char** argv, const char** env) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	std::cin >> t;
	for ( size_t i = NULL; i < t; ++i ) {
		std::fill(bitmask[ 0 ], bitmask[ 0 ] + (10 * (1 << 10)), -1);
		std::fill(board[ 0 ], board[ 0 ] + (10 * 10), 0);

		int n, m;
		std::cin >> n >> m;

		for ( size_t j = NULL; j < n; ++j ) {
			for ( size_t k = NULL; k < m; ++k ) {
				std::cin >> board[ j ][ k ];
			}
		}
		int dfsArray[ 10 ] = { NULL };
		std::vector<std::string> lines;
		dfs(lines, dfsArray, NULL, m);

		std::cout << dp(lines, NULL, NULL, n, m) << std::endl;
	}

	return EXIT_SUCCESS;
}*/