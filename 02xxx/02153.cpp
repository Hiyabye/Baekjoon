#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int sum = 0;
  for (char c : s) {
    if (c >= 'a' && c <= 'z') sum += c - 'a' + 1;
    else sum += c - 'A' + 27;
  }

  cout << "It is ";
  for (int i=2; i<sum; i++) {
    if (sum % i) continue;
    cout << "not ";
    break;
  }
  cout << "a prime word.";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}