/*#include <iostream>

using namespace std;

int32_t main(const int argc, const char** argv, const char** env) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int n = 0;
	std::cin >> n;

	for (size_t i = 0; i < n; ++i) {
		std::string word;
		std::cin >> word;
		
		if (word.length( ) > 10) {
			std::cout << word[0] << word.length( ) - 2 << word[word.length( ) - 1] << std::endl;
		} else {
			std::cout << word << std::endl;
		}
	}

	return EXIT_SUCCESS;
}
*/