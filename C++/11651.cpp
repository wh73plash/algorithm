//#pragma region include
//#ifndef _GLIBCXX_NO_ASSERT
//#include <cassert>
//#endif
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
//bool compare(std::pair<int, int> f, std::pair<int, int> s) {
//	if (f.second == s.second) {
//		return f.first < s.first;
//	} else {
//		return f.second < s.second;
//	}
//}
//
//int32_t main(const int argc, const char** argv, const char** env) {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//
//	int n;
//	std::vector<std::pair<int, int>> point;
//	std::cin >> n;
//	while (n--) {
//		int x, y;
//		std::cin >> x >> y;
//		point.push_back(std::make_pair(x, y));
//	}
//
//	std::sort(point.begin( ), point.end( ), compare);
//
//	for (const auto& i : point) {
//		std::cout << i.first << " " << i.second << std::endl;
//	}
//
//	return EXIT_SUCCESS;
//}
