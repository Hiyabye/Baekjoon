#include <iostream>
#include <vector>
using namespace std;

vector<bool> tri(1001, false);

void precompute(void) {
  for (int i=1; i*(i+1)/2<=1000; i++) {
    tri[i*(i+1)/2] = true;
  }
}

void solve(void) {
  int k; cin >> k;

  for (int i=1; i<=k; i++) {
    if (!tri[i]) continue;
    for (int j=1; j<=k; j++) {
      if (!tri[j]) continue;
      for (int l=1; l<=k; l++) {
        if (!tri[l]) continue;
        if (i+j+l == k) {
          cout << "1\n";
          return;
        }
      }
    }
  }
  cout << "0\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  precompute();

  int t; cin >> t;
  while (t--) solve();
  return 0;
}