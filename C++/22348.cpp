//#define _CRT_SECURE_NO_WARNINGS
//
//#pragma region include
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
//const int mod = 1e9 + 7;
//int tc, A, B;
//int dp[451][50001];
//
//int32_t main(const int argc, const char** argv, const char** env) {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//
//    cin >> tc;
//    while (tc--) {
//        cin >> A >> B;
//        int ans = 0;
//        dp[0][0] = 1;
//        for (int r = 1; r <= 450; r++) {
//            for (int a = 0; a <= A; a++) {
//                dp[r][a] = dp[r - 1][a];
//                if (a >= r) {
//                    dp[r][a] = (dp[r][a] + dp[r - 1][a - r]) % mod;
//                }
//                if (a >= r * (r + 1) / 2 - B) {
//                    ans = (ans + dp[r][a]) % mod;
//                }
//            }
//        }
//        cout << ans << '\n';
//    }
//
//	return EXIT_SUCCESS;
//}