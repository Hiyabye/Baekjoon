#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

bool cmp(const pair<string, double> &a, const pair<string, double> &b) {
  return a.second > b.second;
}

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;
  vector<pair<string, double>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].first >> v[i].second;
  stable_sort(v.begin(), v.end(), cmp);

  cout << v[0].first << " ";
  for (int i=1; i<n; i++) {
    if (v[i].second < v[0].second) break;
    cout << v[i].first << " ";
  }
  cout << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}