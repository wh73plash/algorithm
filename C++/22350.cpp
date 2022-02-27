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
//const int LG = 20;
//int n, m;
//std::vector<std::vector<int>> G;
//std::vector<int> dep, ord;
//std::vector<std::array<int, LG>> par;
//std::vector<int> pcen;
//
//std::vector<std::vector<int>> RB;
//std::vector<std::tuple<int, int, int>> BZ;
//std::vector<std::vector<int>> B;
//
//struct hmap : std::vector<long long int> {
//    long long int get(int x) {
//        if (x < 0 || x >= int(size( ))) return 0ll;
//        return *(begin( ) + x);
//    }
//    void add(int x, long long int v) {
//        if (x < 0 || x >= int(size( ))) {
//            assert(0);
//        }
//        *(begin( ) + x) += v;
//    }
//};
//std::vector<hmap> subdp, pardp;
//
//namespace Cent {
//    std::vector<int> sz;
//    std::vector<bool> del;
//    std::vector<int> vis;
//    int vlk;
//    void init( ) {
//        sz.resize(n + 1);
//        del.resize(n + 1);
//        vis.resize(n + 1);
//        vlk = 0;
//    }
//    void dfs(int x) {
//        vis[x] = vlk;
//        sz[x] = 1;
//        for (int u : G[x]) {
//            if (del[u] || vis[u] == vlk) continue;
//            dfs(u);
//            sz[x] += sz[u];
//        }
//    }
//
//    int cen(int x, int tot) {
//        std::pair<int, int> msz(0, -1);
//        for (int u : G[x]) {
//            if (del[u] || vis[u] != vlk || sz[u] > sz[x]) continue;
//            msz = std::max(msz, std::pair<int, int>(sz[u], u));
//        }
//        if (msz.first * 2 <= tot) return x;
//        return cen(msz.second, tot);
//    }
//
//    int dnc(int x) {
//        ++vlk;
//        dfs(x);
//        int c = cen(x, sz[x]);
//        subdp[c].resize(sz[x] + 1);
//        pardp[c].resize(sz[x] + 1);
//        del[c] = true;
//        for (int u : G[c]) {
//            if (del[u]) continue;
//            int r = dnc(u);
//            pcen[r] = c;
//        }
//        return c;
//    }
//}
//
//std::vector<std::vector<int>> ballsToRetrieve;
//std::vector<long long int> dp;
//
//int dfs_clk;
//void dfs(int x) {
//    ++dep[x];
//    ord.push_back(x);
//    for (int i = 1; i < LG; i++) par[x][i] = par[par[x][i - 1]][i - 1];
//    for (int u : G[x]) {
//        if (dep[u]) continue;
//        dep[u] = dep[x]; par[u][0] = x;
//        dfs(u);
//    }
//    for (auto j : B[x]) {
//        ballsToRetrieve[std::max(1, dep[x] - get<1>(BZ[j]))].push_back(j);
//    }
//    RB[x] = ballsToRetrieve[dep[x]]; ballsToRetrieve[dep[x]].clear( );
//}
//
//int lca(int i, int j) {
//    if (dep[i] < dep[j]) swap(i, j);
//    for (int a = dep[i] - dep[j], k = 0; a; a >>= 1, k++) {
//        if (a & 1) i = par[i][k];
//    }
//    for (int l = 19; l >= 0; l--) {
//        if (par[i][l] != par[j][l]) {
//            i = par[i][l], j = par[j][l];
//        }
//    }
//    return i == j ? i : par[i][0];
//}
//
//int dist(int i, int j) {
//    int l = lca(i, j);
//    return dep[i] + dep[j] - 2 * dep[l];
//}
//
//long long int collect_dp(int x, int d) {
//    long long int ans = 0;
//    for (int v = x; v; v = pcen[v]) {
//        int r = dist(v, x);
//        ans += subdp[v].get(d - r);
//        if (pcen[v]) {
//            int s = dist(pcen[v], x);
//            ans -= pardp[v].get(d - s);
//        }
//    }
//    return ans;
//}
//
//void update_dp(int x, long long int val) {
//    for (int v = x; v; v = pcen[v]) {
//        int r = dist(v, x);
//        subdp[v].add(r, val);
//        if (pcen[v]) {
//            int s = dist(pcen[v], x);
//            pardp[v].add(s, val);
//        }
//    }
//}
//
//void dfs_dp(int x) {
//    for (int u : G[x]) {
//        if (dep[u] < dep[x]) continue;
//        dfs_dp(u);
//        dp[x] += dp[u];
//    }
//    for (auto j : RB[x]) {
//        auto [c, d, g] = BZ[j];
//        long long int local_dp = collect_dp(c, d + 1);
//        dp[x] = std::max(dp[x], g + local_dp);
//    }
//    update_dp(x, dp[x]);
//}
//
//void init( ) {
//    G.resize(n + 1);
//    dep.resize(n + 1);
//    par.resize(n + 1);
//    pcen.resize(n + 1);
//    RB.resize(n + 1);
//    B.resize(n + 1);
//    ballsToRetrieve.resize(n + 1);
//    subdp.resize(n + 1);
//    pardp.resize(n + 1);
//    dp.resize(n + 1);
//    Cent::init( );
//}
//
//int32_t main(const int argc, const char** argv, const char** env) {
//    std::ios::sync_with_stdio(false);
//    std::cin.tie(nullptr);
//    std::cout.tie(nullptr);
//
//    std::cin >> n >> m;
//    init( );
//
//    for (int i = 1, a, b; i < n; i++) {
//        std::cin >> a >> b;
//        G[a].push_back(b);
//        G[b].push_back(a);
//    }
//    Cent::dnc(1);
//    for (int i = 0, c, d, g; i < m; i++) {
//        std::cin >> c >> d >> g;
//        BZ.emplace_back(c, d, g);
//        B[c].push_back(i);
//    }
//
//    dfs(1);
//    dfs_dp(1);
//    std::printf("%d\n", dp[1]);
//
//    return EXIT_SUCCESS;
//}
