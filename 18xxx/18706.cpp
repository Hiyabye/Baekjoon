#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int c, p; cin >> c >> p;
  unordered_map<string, int> mp1, mp2, mp3;
  while (c--) {
    string n; int s, m, l; cin >> n >> s >> m >> l;
    mp1[n] = s; mp2[n] = m; mp3[n] = l;
  }

  for (int i=0; i<p; i++) {
    string x, y, z; cin >> x >> y >> z;
    int a = 100 / p;
    if (y == "small") a += mp1[z];
    else if (y == "medium") a += mp2[z];
    else a += mp3[z];
    if (a % 5 == 1) a--;
    else if (a % 5 == 4) a++;
    cout << x << " " << a << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}