#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(const string &a, const string &b) {
  vector<int> c(26, 0), d(26, 0);
  for (char ch : a) c[ch - 'a']++;
  for (char ch : b) d[ch - 'a']++;

  for (int i=0; i<26; i++) {
    for (int j=0; j<c[i] && j<d[i]; j++) {
      cout << (char)('a' + i);
    }
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string a, b;
  while (getline(cin, a), getline(cin, b)) solve(a, b);
  return 0;
}