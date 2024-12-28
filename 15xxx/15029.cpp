#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

unordered_map<string, int> mp = {
  {"red", 1}, {"yellow", 2}, {"green", 3},
  {"brown", 4}, {"blue", 5}, {"pink", 6}, {"black", 7}
};

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    a[i] = mp[s];
  }
  sort(a.begin(), a.end());

  if (a.back() == 1) {
    cout << 1;
  } else {
    cout << count(a.begin(), a.end(), 1) * a.back() + accumulate(a.begin(), a.end(), 0);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}