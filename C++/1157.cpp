//#pragma region include
//#pragma warning(disable : 4996)
//#include <cassert>
//#include <cctype>
//#include <cerrno>
//#include <cfloat>
//#include <ciso646>
//#include <climits>
//#include <clocale>
//#include <cmath>
//#include <csetjmp>
//#include <csignal>
//#include <cstdarg>
//#include <cstddef>
//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <ctime>
//#include <algorithm>
//#include <bitset>
//#include <complex>
//#include <deque>
//#include <exception>
//#include <fstream>
//#include <functional>
//#include <iomanip>
//#include <ios>
//#include <iosfwd>
//#include <iostream>
//#include <istream>
//#include <iterator>
//#include <limits>
//#include <list>
//#include <locale>
//#include <map>
//#include <memory>
//#include <new>
//#include <numeric>
//#include <ostream>
//#include <queue>
//#include <set>
//#include <sstream>
//#include <stack>
//#include <stdexcept>
//#include <streambuf>
//#include <string>
//#include <typeinfo>
//#include <utility>
//#include <valarray>
//#include <vector>
//#pragma endregion
//
//using namespace std;
//
//int32_t main(const int argc, const char** argv, const char** env) {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//
//	std::vector<int> alphabet(26, 0);
//	std::string str;
//	std::cin >> str;
//	for (size_t i = 0; i < str.size( ); ++i) {
//		if (str[i] <= 90) {
//			alphabet[str[i] - 'A']++;
//		} else {
//			alphabet[str[i] - 'a']++;
//		}
//	}
//	int max = -1, cnt = -1;
//	bool dupl = false;
//	for (size_t i = 0; i < alphabet.size( ); ++i) {
//		if (max < alphabet[i]) {
//			max = alphabet[i];
//			cnt = i;
//			dupl = false;
//		} else if (max == alphabet[i]) {
//			dupl = true;
//		}
//	}
//	char res = dupl ? '?' : static_cast<char>(cnt + 'A');
//	std::cout << res << std::endl;
//
//	return EXIT_SUCCESS;
//}
