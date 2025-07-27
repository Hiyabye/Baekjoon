#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<int> w1(n), w2(n), h1(n), h2(n);
  for (int i=0; i<n; i++) cin >> w1[i] >> w2[i] >> h1[i] >> h2[i];

  int a = *min_element(w1.begin(), w1.end());
  int b = *max_element(w2.begin(), w2.end());
  int c = *min_element(h1.begin(), h1.end());
  int d = *max_element(h2.begin(), h2.end());

  for (int i=0; i<n; i++) {
    if (w1[i] == a && w2[i] == b && h1[i] == c && h2[i] == d) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "TAK" : "NIE") << "\n";
  return 0;
}