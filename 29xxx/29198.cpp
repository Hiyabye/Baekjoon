#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve(void) {
  int n, m, k;
  cin >> n >> m >> k;
  vector<string> s(n);
  for (int i=0; i<n; i++) {
    cin >> s[i];
    sort(s[i].begin(), s[i].end());
  }
  sort(s.begin(), s.end());

  string t = "";
  for (int i=0; i<k; i++) t += s[i];
  sort(t.begin(), t.end());
  cout << t;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}