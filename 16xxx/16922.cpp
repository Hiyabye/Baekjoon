#include <iostream>
#include <string>
#include <unordered_set>
#include <utility>
using namespace std;

struct pair_hash {
  size_t operator()(const pair<int, int> &p) const {
    return (p.first << 16) + p.second;
  }
};

int n;
unordered_set<int> a;
unordered_set<pair<int, int>, pair_hash> b;

inline int calc(const string &s) {
  int ret = 0;
  for (char c : s) {
    if (c == 'I') ret += 1;
    else if (c == 'V') ret += 5;
    else if (c == 'X') ret += 10;
    else if (c == 'L') ret += 50;
  }
  return ret;
}

void backtrack(int idx, string cur) {
  if (idx == n) {
    a.insert(calc(cur));
    return;
  }
  b.insert({idx, calc(cur)});

  if (!b.count({idx+1, calc(cur+'I')})) backtrack(idx+1, cur+'I');
  if (!b.count({idx+1, calc(cur+'V')})) backtrack(idx+1, cur+'V');
  if (!b.count({idx+1, calc(cur+'X')})) backtrack(idx+1, cur+'X');
  if (!b.count({idx+1, calc(cur+'L')})) backtrack(idx+1, cur+'L');
}

void solve(void) {
  cin >> n;

  backtrack(0, "");
  cout << a.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}