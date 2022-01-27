/*
#include "bits/stdc++.h"

using namespace std;

std::string strNum;
int digit[ 10 ] = { 6,2,5,5,4,5,6,3,7,5 };
char cache[ 16 ][ 16 ][ 16 ][ 16 ][ 16 ][ 16 ][ 2 ];
long long ans;

int countcor(long long int num, size_t size) {
	int cnt = NULL;
	for(size_t i = 0; i < size; ++i) {
		cnt += digit[ num % 10 ];
		num = num / 10;
	}
	return cnt;
}

int time(long long currentNum, int cnt2, int cnt3, int cnt4, int cnt5, int cnt6, 
	int cnt7, int objCnt, int pass, int len, int idx, long long num) {
	if(idx == len) {
		if(2 * cnt2 + 3 * cnt3 + 4 * cnt4 + 5 * cnt5 + 6 * cnt6 + 7 * cnt7 == objCnt) {
			if(pass == 0 && currentNum == num)
				return 0;
			ans = currentNum;
			return 1;
		}
		return 0;
	}

	char& ret = cache[ cnt2 ][ cnt3 ][ cnt4 ][ cnt5 ][ cnt6 ][ cnt7 ][ pass ];

	if(ret != -1)
		return ret;

	ret = 0;
	for(int i = pass == 1 ? 0 : (strNum[ idx ] - '0'); i < 10; i++) {
		int newPass = pass == 1 || i > strNum[ idx ] - '0';

		ret = time(10 * currentNum + i, cnt2 + (int)(digit[ i ] == 2), cnt3 + (int)(digit[ i ] == 3), cnt4 + (int)(digit[ i ] == 4), 
			cnt5 + (int)(digit[ i ] == 5), cnt6 + (int)(digit[ i ] == 6), cnt7 + (int)(digit[ i ] == 7), objCnt, newPass, len, idx + 1, num);
		if(ret != 0)
			return ret;
		if(idx == 0 && i == 9) {
			i = -1;
			pass = 1;
		}
	}
	return ret;
}

int32_t main(const int argc, const char** argv, const char** env) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, cnt;
	long long int limit;
	std::memset(&cache, -1, sizeof(cache));
	std::cin >> strNum;
	N = strNum.size( );
	limit = std::pow(10, N);
	cnt = countcor(std::stoll(strNum), N);

	time(NULL, NULL, NULL, NULL, NULL, NULL, NULL, cnt, NULL, N, NULL, std::stoll(strNum));

	if(ans - std::stoll(strNum) == 0) {
		std::cout << (ans - 1 - std::stoll(strNum) + limit) % limit + 1 << std::endl;
	} else {
		std::cout << (ans - std::stoll(strNum) + limit) % limit << std::endl;
	}

	return EXIT_SUCCESS;
}
*/