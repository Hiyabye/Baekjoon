#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<int> p(n);
  for (int i=0; i<n; i++) cin >> p[i];
  for (int i=1; i<n; i++) p[i] ^= p[i-1];

  return (*max_element(p.begin(), p.end()) > 1) ^ (p.back() == 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "koosaga" : "cubelover");
  return 0;
}