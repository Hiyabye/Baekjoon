#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;
  if (s == "#") return false;

  int cnt = 0, n = s.length();
  for (int i=0; i<n-1; i++) {
    cnt += s[i] - '0';
    cout << s[i];
  }
  
  cout << (s[n-1] == 'e' && cnt & 1 || s[n-1] == 'o' && !(cnt & 1) ? '1' : '0') << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  while (solve());
  return 0;
}