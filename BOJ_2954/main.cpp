#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
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

string s;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  getline(cin, s);

  auto oss = ostringstream{};
  for (auto i = 0; i < s.length(); ++i) {
    oss << s[i];
    if ('a' == s[i] || 'e' == s[i] || 'i' == s[i] || 'o' == s[i] ||
        'u' == s[i]) {
      i += 2;
    }
  }

  cout << oss.str();

  return 0;
}