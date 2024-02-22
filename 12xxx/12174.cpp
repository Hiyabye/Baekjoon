#include <iostream>
#include <string>
using namespace std;

void solve(int idx) {
  int b; cin >> b;
  string s; cin >> s;

  cout << "Case #" << idx << ": ";
  for (int i=0; i<8*b; i+=8) {
    int x = 0;
    for (int j=0; j<8; j++) {
      x <<= 1;
      x += (s[i+j] == 'I');
    }
    cout << (char)x;
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  cin.ignore();
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}