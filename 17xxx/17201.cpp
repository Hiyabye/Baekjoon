#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  string a; cin >> a;

  for (int i=1; i<n; i++) {
    if (a[2*i-1] == a[2*i]) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}