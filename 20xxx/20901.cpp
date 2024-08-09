#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

bool cmp(pair<string, double> a, pair<string, double> b) {
  if (a.first == "cylinder") a.second *= sqrt(2);
  if (b.first == "cylinder") b.second *= sqrt(2);
  return a.second < b.second;
}

void solve(void) {
  int n; cin >> n;
  vector<pair<string, double>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].first >> v[i].second;
  sort(v.begin(), v.end(), cmp);

  for (int i=1; i<n; i++) {
    if ((v[i-1].first == "cylinder") == (v[i].first == "cylinder")) continue;
    if (v[i-1].first == "cylinder") {
      if (v[i-1].second * sqrt(2) <= v[i].second && v[i].second < v[i-1].second * 2) {
        cout << "impossible";
        return;
      }
    } else {
      if (v[i].second * sqrt(2) <= v[i-1].second && v[i-1].second < v[i].second * 2) {
        cout << "impossible";
        return;
      }
    }
  }

  for (int i=0; i<n; i++) {
    cout << v[i].first << " " << v[i].second << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}