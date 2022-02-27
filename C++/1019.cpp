/*
#include "bits/stdc++.h"

using namespace std;

int arr[ 10 ] = { 0, };
int Page_Start = 1;
long long temp = 1;

void Cal_count(int num) {
	while(num != 0) {
		arr[ num % 10 ] += temp;
		num /= 10;
	}
}

int32_t main(const int argc, const char** argv, const char** env) {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int Page_Final;
	std::cin >> Page_Final;

	while(Page_Start <= Page_Final) {
		while(Page_Start % 10 != 0 && Page_Start <= Page_Final) {
			Cal_count(Page_Start);
			Page_Start++;
		}
		if(Page_Start > Page_Final) break;
		while(Page_Final % 10 != 9 && Page_Start <= Page_Final) {
			Cal_count(Page_Final);
			Page_Final--;
		}
		Page_Start /= 10;
		Page_Final /= 10;

		for(int i = 0; i < 10; ++i)
			arr[ i ] += (Page_Final - Page_Start + 1) * temp;
		temp *= 10;
	}

	for(int i = 0; i < 10; i++)
		std::cout << arr[ i ] << " ";
	return 0;
}
*/