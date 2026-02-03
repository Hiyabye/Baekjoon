#include <iostream>
#include <map>
#include <vector>
using namespace std;

void solve(void) {
  long long x0, n; cin >> x0 >> n;
  vector<long long> db;
  map<long long, long long> mp;

  for (long long i=0; i<=n; i++) {
    if (mp.find(x0) != mp.end()) {
      long long idx = mp[x0] + (n - i) % (i - mp[x0]);
      cout << db[idx];
      return;
    }
    db.push_back(x0); mp[x0] = i;

    if (x0 & 1) x0 = (x0 << 1) ^ 6;
    else        x0 = (x0 >> 1) ^ 6;
  }
  cout << db.back();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}