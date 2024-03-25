#include <iostream>
using namespace std;

bool solve(void) {
  long long n, b; cin >> n >> b;

  return n < (1LL << (b + 1));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "yes" : "no");
  return 0;
}