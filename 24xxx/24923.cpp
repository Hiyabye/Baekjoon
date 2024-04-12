#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; getline(cin, s);

  return s.substr(s.length()-3) == "eh?";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Canadian!" : "Imposter!");
  return 0;
}