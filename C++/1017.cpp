/*#include <iostream>
#include <vector>

using namespace std;

const int16_t prime_size = 2001, max_size = 51;
bool pBoolean[ prime_size ], s[ max_size ];
std::vector<bool> check(max_size);
std::vector<std::vector<int>> adj;
std::vector<int> value, p(max_size);

void prime(void) {
	std::fill(pBoolean, pBoolean + prime_size, true);

    pBoolean[ 0 ] = pBoolean[ 1 ] = false;
	int limit = (int)std::sqrt(prime_size);
	for ( size_t i = 2; i < limit; ++i ) {
		if (pBoolean[ i ] == true ) {
			for ( size_t j = 2; i * j < prime_size; ++j ) {
                pBoolean[i * j ] = false;
			}
		}
	}
	return;
}

bool dfs(int current) {
	if ( check[ current ] ) {
		return false;
	}
	check[ current ] = true;

	for ( size_t i = 0; i < adj[ current ].size(); ++i ) {
		int pc = adj[ current ][ i ];

		if ( p[ pc ] == -1 || dfs(p[ pc ]) ) {
			p[ pc ] = current;
			s[ current ] = true;
			check[ pc ] = true;
			p[ current ] = pc;
			s[ pc ] = true;
			
			return true;
		}
	}
	return false;
}

int32_t main(const int argc, const char** argv, const char** env) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	prime();
	int n = 0;
	std::cin >> n;
	value.resize(n + 1);
	adj.resize(n + 1);

	for ( size_t i = 0; i < n; ++i ) {
		std::cin >> value[ i + 1 ];
	}
	std::sort(value.begin() + 2, value.end());

	for ( size_t i = 0; i < n; ++i ) {
		for ( size_t j = 0; j < n; ++j ) {
			if ( i + 1 != j + 1 ) {
				if ( pBoolean[value[i + 1 ] + value[j + 1 ] ] ) {
					adj[ i + 1 ].push_back(j + 1);
				}
			}
		}
	}
	std::vector<int> buffer;
	for ( size_t i = 0; i < adj[ 1 ].size(); ++i ) {
		int chk = 2;
		std::fill(p.begin(), p.begin() + max_size, -1);
		std::fill(s, s + max_size, false);

		int match = adj[ 1 ][ i ];

		for ( size_t j = 1; j <= n; ++j ) {
			if ( s[ j ] ) {
				continue;
			}
			std::fill(check.begin(), check.begin() + max_size, false);

			check[ 1 ] = check[ match ] = true;
			p[ match ] = 1;
			s[ 1 ] = true;
			p[ match ] = true;

			if ( dfs(j) ) {
				chk += 2;
			}
		}
		if ( chk == n ) {
			buffer.push_back(value[ match ]);
		}
	}

	if ( buffer.size() == NULL ) {
		std::cout << "-1" << std::endl;
	} else {
		for ( const auto& i : buffer ) {
			std::cout << i << " ";
		}
	}

	return EXIT_SUCCESS;
}
 */