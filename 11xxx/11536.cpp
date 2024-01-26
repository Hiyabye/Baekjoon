#include <iostream>
#include <vector>
using namespace std;

bool incr(int n, vector<string>& v) {
  for (int i=0; i<n-1; i++) {
    if (v[i] > v[i+1]) return false;
  }
  return true;
}

bool decr(int n, vector<string>& v) {
  for (int i=0; i<n-1; i++) {
    if (v[i] < v[i+1]) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  if (incr(n, v)) {
    cout << "INCREASING";
  } else if (decr(n, v)) {
    cout << "DECREASING";
  } else {
    cout << "NEITHER";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}