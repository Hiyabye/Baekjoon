#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>
using namespace std;

map<char, pair<char, char>> m = {
  {'d', {'q', 'b'}},
  {'q', {'d', 'p'}},
  {'b', {'p', 'd'}},
  {'p', {'b', 'q'}}
};

void solve(void) {
  int n, d; cin >> n >> d;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cout << (d == 1 ? m[v[i][j]].first : m[v[i][j]].second);
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}