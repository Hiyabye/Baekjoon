#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

template <typename T>
class SegmentTree {
private:
  vector<T> tree;
  vector<T> arr;
  int n;
  T (*func)(T, T);

  void init(int node, int start, int end) {
    if (start == end) {
      tree[node] = arr[start];
    } else {
      init(node*2, start, (start+end)/2);
      init(node*2+1, (start+end)/2+1, end);
      tree[node] = func(tree[node*2], tree[node*2+1]);
    }
  }

  T query(int node, int start, int end, int left, int right) {
    if (left > end || right < start) return 1;
    if (left <= start && end <= right) return tree[node];
    T lval = query(node*2, start, (start+end)/2, left, right);
    T rval = query(node*2+1, (start+end)/2+1, end, left, right);
    return func(lval, rval);
  }

  void update(int node, int start, int end, int index, T val) {
    if (index < start || index > end) return;
    if (start == end) {
      arr[index] = val;
      tree[node] = val;
      return;
    }
    update(node*2, start, (start+end)/2, index, val);
    update(node*2+1, (start+end)/2+1, end, index, val);
    tree[node] = func(tree[node*2], tree[node*2+1]);
  }

public:
  SegmentTree(vector<T> &arr, T (*f)(T, T)) : arr(arr), func(f) {
    n = arr.size();
    int h = (int)ceil(log2(n));
    int tree_size = (1 << (h+1));
    tree.resize(tree_size);
    init(1, 0, n-1);
  }

  T query(int left, int right) {
    return query(1, 0, n-1, left, right);
  }

  void update(int index, T val) {
    update(1, 0, n-1, index, val);
  }
};

int sign(int a, int b) {
  if (a * b > 0) return 1;
  else if (a * b < 0) return -1;
  else return 0;
}

void solve(int n, int k) {
  vector<int> x(n);
  for (int i=0; i<n; i++) {
    cin >> x[i];
  }
  SegmentTree<int> st(x, sign);

  char command;
  int a, b;
  for (int i=0; i<k; i++) {
    cin >> command >> a >> b;
    if (command == 'C') {
      st.update(a-1, b);
    } else if (command == 'P') {
      int res = st.query(a-1, b-1);
      if (res > 0) cout << '+';
      else if (res < 0) cout << '-';
      else cout << '0';
    }
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int n, k;
  while (cin >> n >> k) {
    solve(n, k);
  }
  return 0;
}