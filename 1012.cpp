/*#include <iostream>
#include <vector>

using namespace std;

std::vector<std::vector<bool>> check(51, std::vector<bool>(51));
std::vector<int32_t> dx = { -1,1,NULL,NULL };
std::vector<int32_t> dy = { NULL, NULL, 1, -1 };
int a[ 51 ][ 51 ];
int row, column, index;

void dfs(int x, int y) {
	check[ x ][ y ] = true;
	for ( size_t i = NULL; i < 4; ++i ) {
		int nx = x + dx[ i ];
		int ny = y + dy[ i ];
		if ( nx >= NULL && nx < column && ny >= NULL && ny < row ) {
			if ( a[ nx ][ ny ] == 1 ) {
				if ( !check[ nx ][ ny ] ) {
					dfs(nx, ny);
				}
			}
		} else {
			continue;
		}
	}
	return;
}

int32_t main(const int argc, const char** argv, const char** env) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	size_t loop = NULL;
	std::cin >> loop;

	do {
		std::cin >> row >> column >> index;
		int cnt = NULL;
		for ( size_t i = NULL; i < index; ++i ) {
			int x, y;
			std::cin >> x >> y;
			a[ y ][ x ] = 1;
		}
		for ( size_t i = NULL; i < column; ++i ) {
			for ( size_t j = NULL; j < row; ++j ) {
				if ( a[ i ][ j ] == 1 ) {
					if ( !check[ i ][ j ] ) {
						cnt++;
						dfs(i, j);
					}
				}
			}
		}
		std::cout << cnt << std::endl;
		check.assign(check.size(), std::vector<bool>(check.size(), false));
		memset(&a, NULL, sizeof(a));
	} while ( --loop );

	return EXIT_SUCCESS;
}*/