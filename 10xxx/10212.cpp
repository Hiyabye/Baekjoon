#include <iostream>
#include <random>
using namespace std;

void solve(void) {
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<int> dis(0, 1);

  cout << (dis(gen) ? "Yonsei" : "Korea");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}