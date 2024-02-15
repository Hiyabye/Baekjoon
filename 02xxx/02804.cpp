#include <iostream>
#include <string>
#include <utility>
using namespace std;

pair<int, int> find(const string &a, const string &b) {
  for (int i=0; a[i]; i++) for (int j=0; b[j]; j++) {
    if (a[i] == b[j]) return make_pair(i, j);
  }
  return make_pair(-1, -1);
}

void solve(void) {
  string a, b; cin >> a >> b;

  auto [c, d] = find(a, b);
  for (int i=0; i<b.length(); i++) {
    for (int j=0; j<a.length(); j++) {
      cout << (i == d ? a[j] : (j == c ? b[i] : '.'));
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