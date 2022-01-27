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
//#pragma region function
//inline std::string& ltrim(std::string& s, const char* t = " \t\n\r\f\v") {
//    s.erase(0, s.find_first_not_of(t));
//    return s;
//}
//
//inline std::string& rtrim(std::string& s, const char* t = " \t\n\r\f\v") {
//    s.erase(s.find_last_not_of(t) + 1);
//    return s;
//}
//
//inline std::string& trim(std::string& s, const char* t = " \t\n\r\f\v") {
//    return ltrim(rtrim(s, t), t);
//}
//#pragma endregion
//
//int32_t main(const int argc, const char** argv, const char** env) {
//    std::ios::sync_with_stdio(false);
//    std::cin.tie(nullptr);
//    std::cout.tie(nullptr);
//
//    string s = "";
//    cin >> s;
//    stack<char> l;
//    stack<char> r;
//    for (int i = 0; i < s.size( ); i++) {
//        l.push(s[i]);
//    }
//    int num;
//    cin >> num;
//    while (num--) {
//        char tmp;
//        cin >> tmp;
//        if (tmp == 'P') {
//            char c;
//            cin >> c;
//            l.push(c);
//        } else if (tmp == 'L') {
//            if (l.empty( )) continue;
//            else {
//                r.push(l.top( ));
//                l.pop( );
//            }
//        } else if (tmp == 'B') {
//            if (l.empty( )) continue;
//            else l.pop( );
//        } else if (tmp == 'D') {
//            if (r.empty( )) continue;
//            else {
//                l.push(r.top( ));
//                r.pop( );
//            }
//        }
//    }
//    while (!l.empty( )) {
//        r.push(l.top( ));
//        l.pop( );
//    }
//    while (!r.empty( )) {
//        cout << r.top( );
//        r.pop( );
//    }
//    return EXIT_SUCCESS;
//}