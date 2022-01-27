/*
#include <bits/stdc++.h>

using namespace std;

int32_t main(const int argc, const char** argv, const char** env) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	size_t loop;
	std::cin >> loop;

	while ( loop-- ) {
		int n, m;
		std::cin >> n >> m;
		
		long long int buffer = 1;
		int r = 1;
		for ( size_t i = m; i > m - n; --i ) {
			buffer *= i;
			buffer /= r++;
		}
		std::cout << buffer << std::endl;
	}

	return EXIT_SUCCESS;
}*/