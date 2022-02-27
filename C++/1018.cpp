/*#include <bits/stdc++.h>

using namespace std;

std::vector<std::string> WB = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW" 
};
std::vector<std::string> BW = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
};

std::vector<std::string> board(50);

size_t WB_cnt(int x, int y) {
    size_t cnt = 0;
    for ( size_t i = 0; i < 8; ++i ) {
        for ( size_t j = 0; j < 8; ++j ) {
            if ( board[ x + i ][ y + j ] != WB[ i ][ j ] ) {
                ++cnt;
            }
        }
    }
    return cnt;
}

size_t BW_cnt(int x, int y) {
    size_t cnt = 0;
    for ( size_t i = 0; i < 8; ++i ) {
        for ( size_t j = 0; j < 8; ++j ) {
            if ( board[ x + i ][ y + i ] != BW[ i ][ j ] ) {
                ++cnt;
            }
        }
    }
    return cnt;
}

int32_t main(const int argc, const char** argv, const char** env) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

    std::vector<int> size(2);
    size_t cnt;
    int min_value = INT_MAX;
    std::pair<int, int> p;
    std::cin >> p.first >> p.second;
    for ( size_t i = 0; i < p.first; ++i ) {
        std::cin >> board[ i ];
    }
    for ( size_t i = 0; i + 8 <= p.second; ++i ) {
        for ( size_t j = 0; j + 8 <= p.second; ++j ) {
            int buffer = std::min(WB_cnt(i, j), BW_cnt(i, j));
            if ( buffer < min_value ) {
                min_value = buffer;
            }
        }
    }
    std::cout << min_value << std::endl;

	return EXIT_SUCCESS;
}*/