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
//inline std::string& ltrim(std::string& s, const char* t = " \t\n\r\f\v") {
//	s.erase(0, s.find_first_not_of(t));
//	return s;
//}
//
//inline std::string& rtrim(std::string& s, const char* t = " \t\n\r\f\v") {
//	s.erase(s.find_last_not_of(t) + 1);
//	return s;
//}
//
//inline std::string& trim(std::string& s, const char* t = " \t\n\r\f\v") {
//	return ltrim(rtrim(s, t), t);
//}
//
//int N, M;
//int arr[100010];
//
//void binarySearch(int key) {
//    int start = 0;
//    int end = N - 1;
//    int mid;
//
//    while (end >= start) {
//        mid = (start + end) / 2;
//        if (arr[mid] == key) {
//            std::cout << 1 << '\n';
//            return;
//        } else if (arr[mid] > key) {
//            end = mid - 1;
//        } else {
//            start = mid + 1;
//        }
//    }
//    std::cout << 0 << '\n';
//    return;
//}
//
//int32_t main(const int argc, const char** argv, const char** env) {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//
//    std::cin >> N;
//    int temp;
//
//    for (int i = 0; i < N; i++) {
//        std::cin >> temp;
//        arr[i] = temp;
//    }
//
//    std::sort(arr, arr + N);
//
//    std::cin >> M;
//    for (int i = 0; i < M; i++) {
//        std::cin >> temp;
//        binarySearch(temp);
//    }
//
//    return 0;
//
//	return EXIT_SUCCESS;
//}
