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
//#pragma endregion
//
//int32_t main(const int argc, const char** argv, const char** env) {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//
//    std::string str;
//    std::cin >> str;
//    int cnt = str.size();
//    for(int i = 0; i < str.size(); ++i){
//        if(str[i] == '=') { 
//            if(str[i-1] == 'c') cnt--; 
//            if(str[i-1] == 's') cnt--; 
//            if(str[i-1] == 'z') { 
//                cnt--; 
//                if(str[i-2] == 'd') cnt--; 
//            } 
//        } 
//        if(str[i] == '-') { 
//            if(str[i-1] == 'c') cnt--; 
//            if(str[i-1] == 'd') cnt--; 
//        } 
//        if(str[i] == 'j') { 
//            if(str[i-1] == 'l') cnt--; 
//            if(str[i-1] == 'n') cnt--; 
//        } 
//    }
//    std::cout << cnt << '\n';
//
//	return EXIT_SUCCESS;
//}
