#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int l; cin >> l;
  int n; cin >> n;
  vector<int> p(n), k(n);
  for (int i=0; i<n; i++) cin >> p[i] >> k[i];

  int big = 0, big_idx = -1;
  for (int i=0; i<n; i++) {
    if (k[i]-p[i]+1 > big) {
      big = k[i]-p[i]+1;
      big_idx = i+1;
    }
  }
  cout << big_idx << "\n";

  vector<int> cake(l, 0);
  for (int i=0; i<n; i++) {
    for (int j=p[i]; j<=k[i]; j++) {
      if (cake[j] == 0) cake[j] = i+1;
    }
  }

  vector<int> real(n, 0);
  for (int i=0; i<l; i++) {
    if (cake[i] != 0) real[cake[i]-1]++;
  }

  big = 0; big_idx = -1;
  for (int i=0; i<n; i++) {
    if (real[i] > big) {
      big = real[i];
      big_idx = i+1;
    }
  }
  cout << big_idx << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}