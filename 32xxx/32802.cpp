#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Event {
  string t;
  int s, c, g;
};

void solve(void) {
  int n; cin >> n;
  vector<Event> v(n);
  for (int i=0; i<n; i++) cin >> v[i].t >> v[i].s >> v[i].c >> v[i].g;
  int k; cin >> k;

  long long a = 0, b = 0;
  for (int i=0; i<n; i++) {
    if (v[i].s > k) continue;
    if (v[i].t == "CAUGHT") a += v[i].c, b += v[i].g;
    else                    a -= v[i].c, b -= v[i].g;
  }
  cout << a << " " << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}