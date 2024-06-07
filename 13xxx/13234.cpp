#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string a, op, b; cin >> a >> op >> b;

  return (op == "AND") ? (a == "true") && (b == "true") : (a == "true") || (b == "true");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "true" : "false");
  return 0;
}