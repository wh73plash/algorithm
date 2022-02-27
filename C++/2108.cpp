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
//
//int32_t main(const int argc, const char** argv, const char** env) {
//    std::ios::sync_with_stdio(false);
//    std::cin.tie(nullptr);
//    std::cout.tie(nullptr);
//
//    int n, sum = 0;
//    std::cin >> n;
//    int m = n, number[8001] = {0}, most = - 9999, most_val = 0;
//    bool not_first = false;
//    std::vector<int> array;
//    do{
//        int a;
//        std::cin >> a;
//        array.push_back(a);
//        sum += a;
//        number[a + 4000]++;
//    }while(--n);
//    
//    std::cout << std::round((double)sum / m) << '\n';
//    std::sort(array.begin(), array.end());
//    std::cout << array[array.size() / 2] << '\n';
//    
//    for(int i = 0; i < 8001; i++){
//        if(number[i] == 0)
//            continue;
//        if(number[i] == most){
//            if(not_first){
//                most_val = i - 4000;
//                not_first = false;
//            }
//        }
//        if(number[i] > most){
//            most = number[i];
//            most_val = i - 4000;
//            not_first = true;
//        }
//    }
//    std::cout << most_val << '\n';
//    std::cout << array.back() - array.front() << '\n';
//
//    return EXIT_SUCCESS;
//}
