#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  if (s == "Algorithm") cout << "204";
  else if (s == "DataAnalysis") cout << "207";
  else if (s == "ArtificialIntelligence") cout << "302";
  else if (s == "CyberSecurity") cout << "B101";
  else if (s == "Network") cout << "303";
  else if (s == "Startup") cout << "501";
  else if (s == "TestStrategy") cout << "105";
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}