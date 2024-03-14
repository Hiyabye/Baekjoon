#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a; getline(cin, a);
  string b; cin >> b;
  
  for (int i=0; i<a.length(); i++) {
    cout << (a[i] == ' ' ? ' ' : char((a[i] - b[i % b.length()] + 25) % 26 + 'a'));
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}