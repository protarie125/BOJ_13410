#include <algorithm>
#include <bit>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

int n, k;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> n >> k;

	auto ans = 0;

	for (auto i = 1; i <= k; ++i) {
		const auto v = n * i;
		auto str = to_string(v);
		reverse(str.begin(), str.end());

		auto iss = istringstream{ str };
		int u;
		iss >> u;

		ans = max(ans, u);
	}

	cout << ans;

	return 0;
}