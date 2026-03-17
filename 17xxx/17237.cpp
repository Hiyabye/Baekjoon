#include <iostream>
#include <map>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  map<int, int> mp;
  while (n--) {
    int x; cin >> x;
    mp[x]++;
  }

  for (auto it=mp.rbegin(); it!=mp.rend(); it++) {
    if (it->second >= 2) mp[it->first-1] += it->second/2;
  }
  return mp[1] >= 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "A" : "B");
  return 0;
}