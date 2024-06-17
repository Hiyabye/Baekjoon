#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  bool up = true;
  for (int i=1; i<n; i++) {
    if (a[i] == a[i-1]) return false;
    else if (a[i] > a[i-1]) {
      if (!up) return false;
    } else {
      if (up) up = false;
    }
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}