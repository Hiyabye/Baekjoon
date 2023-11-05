#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void solve(int idx) {
  string s; getline(cin, s);

  vector<int> cnt(26, 0);
  for (auto c : s) {
    if (c >= 'A' && c <= 'Z') cnt[c-'A']++;
    else if (c >= 'a' && c <= 'z') cnt[c-'a']++;
  }

  cout << "Case " << idx << ": ";
  switch (*min_element(cnt.begin(), cnt.end())) {
    case 0: cout << "Not a pangram\n"; break;
    case 1: cout << "Pangram!\n"; break;
    case 2: cout << "Double pangram!!\n"; break;
    default: cout << "Triple pangram!!!\n"; break;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int n; cin >> n;
  cin.ignore();
  for (int i=1; i<=n; i++) solve(i);
  return 0;
}