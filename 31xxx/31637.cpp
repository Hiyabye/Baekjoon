#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n, d; cin >> n >> d;
  vector<int> a(2*n);
  for (int i=0; i<2*n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  for (int i=0; i<2*n; i+=2) {
    if (a[i+1] - a[i] > d) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}