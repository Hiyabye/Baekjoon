#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  string f; cin >> f;

  string s = (f == "Whiteking") ? "Blackking" : "Whiteking";

  int ans = 0;
  for (int i=0; i<n; i++) ans ^= (a[i]-2);
  cout << (ans ? f : s);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}