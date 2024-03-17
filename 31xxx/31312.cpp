#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, a, b; cin >> n >> a >> b;
  vector<int> w(n-1);
  for (int i=0; i<n-1; i++) cin >> w[i];

  if (find(w.begin(), w.end(), a) == w.end()) {
    cout << (find(w.begin(), w.end(), b) == w.end() ? -1 : a);
  } else if (find(w.begin(), w.end(), b) == w.end()) {
    cout << b;
  } else {
    for (int i=a; i<=b; i++) cout << i << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}