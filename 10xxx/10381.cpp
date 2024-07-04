#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;
using Dot = pair<double, double>;

inline double dist(const Dot &a, const Dot &b) {
  return sqrt((a.first-b.first)*(a.first-b.first) + (a.second-b.second)*(a.second-b.second));
}

void solve(void) {
  Dot s, f; cin >> s.first >> s.second >> f.first >> f.second;
  long long n, k, vmax; cin >> n >> k >> vmax;
  vector<int> t(n); vector<Dot> w(n);
  for (int i=0; i<n; i++) cin >> t[i] >> w[i].first >> w[i].second;

  vector<Dot> v;
  while (v.size() < t[0]) v.push_back(s);
  for (int i=1; i<n; i++) {
    while (v.size() < t[i]) v.push_back(w[i-1]);
  }
  while (v.size() < k) v.push_back(w.back());

  v[0].first += s.first; v[0].second += s.second;
  for (int i=1; i<k; i++) {
    v[i].first += v[i-1].first;
    v[i].second += v[i-1].second;
  }

  if (dist(v.back(), f) / k > vmax) {
    cout << "No";
    return;
  }

  cout << "Yes\n";
  double dx = (f.first - v.back().first) / k, dy = (f.second - v.back().second) / k;
  for (int i=0; i<k; i++) {
    Dot ans = {v[i].first + dx * (i+1), v[i].second + dy * (i+1)};
    cout << fixed << setprecision(6) << ans.first << " " << ans.second << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}