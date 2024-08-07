#include <iostream>
#include <vector>
using namespace std;

vector<int> precompute(void) {
  vector<int> p(10001, 0);
  for (int i=1, n=1; i<=10000; i++) {
    if (i > n*(n+1)/2) n++;
    p[i] = p[i-1] + n;
  }
  return p;
}

bool solve(const vector<int> &p) {
  int n; cin >> n;
  if (n == 0) return false;

  cout << n << " " << p[n] << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> p = precompute();
  while (solve(p));
  return 0;
}