#include <iostream>
using namespace std;

double calc(void) {
  int a, b; cin >> a >> b;
  double ret = 0;
  for (int i=a; i<=b; i++) ret += i;
  return ret / (b-a+1);
}

void solve(void) {
  double g = calc() + calc();
  double e = calc() + calc();

  cout << (g == e ? "Tie" : (g > e ? "Gunnar" : "Emma"));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}