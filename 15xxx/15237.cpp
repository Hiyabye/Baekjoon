#include <algorithm>
#include <iostream>
#include <map>
#include <utility>
#include <vector>
using namespace std;

struct Number {
  int value, count, index;
};

inline bool cmp(const Number &a, const Number &b) {
  if (a.count != b.count) return a.count > b.count;
  return a.index < b.index;
}

void solve(void) {
  int n, c; cin >> n >> c;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  map<int, pair<int, int>> mp;
  for (int i=0; i<n; i++) {
    if (mp.find(v[i]) == mp.end()) mp[v[i]] = {1, i};
    else mp[v[i]].first++;
  }

  vector<Number> numbers;
  for (auto [p, q] : mp) {
    numbers.push_back({p, q.first, q.second});
  }
  sort(numbers.begin(), numbers.end(), cmp);

  for (int i=0; i<numbers.size(); i++) {
    for (int j=0; j<numbers[i].count; j++) {
      cout << numbers[i].value << " ";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}