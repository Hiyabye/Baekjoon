#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<int> fact(11, 1);

void solve(string s, int n) {
  cout << s << " " << n << " = ";
  sort(s.begin(), s.end());

  if (n > fact[s.length()]) cout << "No permutation\n";
  else {
    while (--n) next_permutation(s.begin(), s.end());
    cout << s << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  for (int i=2; i<=10; i++) fact[i] = fact[i-1] * i;

  string s; int n;
  while (cin >> s >> n) solve(s, n);
  return 0;
}