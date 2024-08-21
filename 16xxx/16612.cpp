#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  int n, l; cin >> n >> l;
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    l -= s.length();
  }
  
  if (n == 1) return l == 0;
  return l >= n - 1 && l % (n - 1) == 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}