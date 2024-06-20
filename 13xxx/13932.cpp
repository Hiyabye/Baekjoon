#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<pair<int, int>> s(n);
  for (int i=0; i<n; i++) cin >> s[i].first, s[i].second = i+1;
  sort(s.begin(), s.end(), greater<pair<int, int>>());

  int sum = 0;
  for (int i=0; i<n; i++) sum += s[i].first;
  if (s[0].first * 2 > sum) return false;

  for (int i=0; i<n; i++) {
    cout << s[i].second << " ";
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "" : "impossible");
  return 0;
}