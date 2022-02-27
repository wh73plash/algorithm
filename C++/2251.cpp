/*
#include "bits/stdc++.h"

using namespace std;

#define TRUE 1
#define FALSE 0

int visited[ 200 ][ 200 ][ 200 ] = { 0 };
int capacity[ 3 ];
int now_water[ 3 ] = { 0 };
vector<int> answer_vec;
int move_map[ 6 ][ 2 ] = { {0,1},{0,2},{1,0},{1,2},{2,0},{2,1} };

void plusVisited( ) {
    visited[ now_water[ 0 ] ][ now_water[ 1 ] ][ now_water[ 2 ] ] = 1;
}

int isVisited( ) {
    if(visited[ now_water[ 0 ] ][ now_water[ 1 ] ][ now_water[ 2 ] ]) return 1;
    else return 0;
}

void answerPush( ) {
    if(now_water[ 0 ] == 0)  answer_vec.push_back(now_water[ 2 ]);
}

int dfs(int depth, int from, int to) {
    int sub_now_waters[ 3 ];

    pair<int, int> now_move = pair<int, int>(from, to);

    if(now_water[ now_move.first ] == 0) return -1;

    if(now_water[ now_move.second ] == capacity[ now_move.second ]) return -1;

    if(now_water[ now_move.first ] > capacity[ now_move.second ] - now_water[ now_move.second ]) {
        now_water[ now_move.first ] -= capacity[ now_move.second ] - now_water[ now_move.second ];
        now_water[ now_move.second ] = capacity[ now_move.second ];
    }
    else {
        now_water[ now_move.second ] += now_water[ now_move.first ];
        now_water[ now_move.first ] = 0;
    }

    if(isVisited( )) {
        return 1;
    }

    plusVisited( );
    answerPush( );

    for(int i = 0; i < 3; i++) {
        sub_now_waters[ i ] = now_water[ i ];
    }

    for(int i = 0; i < 6; i++) {
        dfs(depth + 1, move_map[ i ][ 0 ], move_map[ i ][ 1 ]);

        for(int i = 0; i < 3; i++) {
            now_water[ i ] = sub_now_waters[ i ];
        }
    }

    return 0;
}

int32_t main(const int argc, const char** argv, const char** env) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

    for(int i = 0; i < 3; i++) {
        cin >> capacity[ i ];
    }
    now_water[ 2 ] = capacity[ 2 ];
    plusVisited( );   
    answerPush( );

    for(int i = 4; i < 6; i++) {

        dfs(0, move_map[ i ][ 0 ], move_map[ i ][ 1 ]);

        now_water[ 0 ] = now_water[ 1 ] = 0;
        now_water[ 2 ] = capacity[ 2 ];

    }

    sort(answer_vec.begin( ), answer_vec.end( ));
    for(const auto& i : answer_vec) {
        std::cout << i << " ";
    }

	return EXIT_SUCCESS;
}
*/