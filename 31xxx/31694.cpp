#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> a(18), b(18);
  for (int i=0; i<18; i++) cin >> a[i];
  for (int i=0; i<18; i++) cin >> b[i];

  int c = accumulate(a.begin(), a.end(), 0);
  int d = accumulate(b.begin(), b.end(), 0);
  if (c != d) {
    cout << (c > d ? "Algosia" : "Bajtek");
    return;
  }

  for (int i=10; i>=1; i--) {
    int e = count(a.begin(), a.end(), i);
    int f = count(b.begin(), b.end(), i);
    if (e != f) {
      cout << (e > f ? "Algosia" : "Bajtek");
      return;
    }
  }
  cout << "remis";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}