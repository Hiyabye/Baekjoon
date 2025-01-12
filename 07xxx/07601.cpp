#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(int idx) {
  int n, d; cin >> n >> d;
  if (n == 0 && d == 0) return false;

  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) a[i] = i+1, b[i] = n-i;

  int p, q; cin >> p >> q;
  if (p) a.erase(a.begin()+p-1);
  if (q) b.erase(b.begin()+q-1);

  cout << "Scenario " << idx << "\n";
  for (int i=1; i<=d; i++) {
    int s, t; cin >> s >> t; s--; t--;
    cout << "Day " << i << " " << (a[s] == b[t] ? "ALERT" : "OK") << "\n";
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}