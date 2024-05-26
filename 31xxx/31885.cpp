#include <cmath>
#include <iostream>
#include <set>
#include <utility>
#include <vector>
using namespace std;

int n, k;
vector<long long> a, b;
long long ex, ey;

bool zero(void) {
  return ex == 0 && ey == 0;
}

bool one(void) {
  return abs(ex) + abs(ey) == 1;
}

bool two(void) {
  if (abs(ex) + abs(ey) == 2) return true;
  for (int i=0; i<n; i++) {
    if (abs(ex-a[i]) + abs(ey-b[i]) == 0) return true;
  }
  return false;
}

bool three(void) {
  if (abs(ex) + abs(ey) == 3) return true;
  for (int i=0; i<n; i++) {
    if (abs(ex-a[i]) + abs(ey-b[i]) == 1) return true;
  }
  return false;
}

bool four(void) {
  if (abs(ex) + abs(ey) == 4) return true;
  for (int i=0; i<n; i++) {
    if (abs(ex-a[i]) + abs(ey-b[i]) == 2) return true;
  }
  set<pair<long long, long long>> s;
  for (int i=0; i<n; i++) {
    s.insert({ex-a[i], ey-b[i]});
  }
  for (int i=0; i<n; i++) {
    if (s.find({a[i], b[i]}) != s.end()) return true;
  }
  return false;
}

bool five(void) {
  if (abs(ex) + abs(ey) == 5) return true;
  for (int i=0; i<n; i++) {
    if (abs(ex-a[i]) + abs(ey-b[i]) == 3) return true;
  }
  set<pair<long long, long long>> s;
  for (int i=0; i<n; i++) {
    s.insert({ex-a[i], ey-b[i]});
  }
  for (int i=0; i<n; i++) {
    if (s.find({a[i]+1, b[i]}) != s.end()) return true;
    if (s.find({a[i]-1, b[i]}) != s.end()) return true;
    if (s.find({a[i], b[i]+1}) != s.end()) return true;
    if (s.find({a[i], b[i]-1}) != s.end()) return true;
  }
  return false;
}

int solve(void) {
  cin >> n >> k;
  a.resize(n); b.resize(n);
  for (int i=0; i<n; i++) cin >> a[i] >> b[i];
  cin >> ex >> ey;

  if (k >= 0 && zero()) return 0;
  if (k >= 1 && one()) return 1;
  if (k >= 2 && two()) return 2;
  if (k >= 3 && three()) return 3;
  if (k >= 4 && four()) return 4;
  if (k >= 5 && five()) return 5;
  return -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}