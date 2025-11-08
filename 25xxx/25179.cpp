#include <iostream>
using namespace std;

bool solve(void) {
  long long n, m; cin >> n >> m;

  return n % (m+1) != 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Can" : "Can't") << " win";
  return 0;
}