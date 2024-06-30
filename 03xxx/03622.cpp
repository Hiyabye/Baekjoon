#include <iostream>
using namespace std;

bool solve(void) {
  int A, a, B, b, P; cin >> A >> a >> B >> b >> P;

  return (A + B <= P) || (A <= P && B <= a) || (B <= P && A <= b);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}