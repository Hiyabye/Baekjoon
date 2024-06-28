#include <iostream>
#include <vector>
#include <utility>
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
    if (left > end || right < start) return make_pair(0, 0);
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

pair<int, int> process(pair<int, int> a, pair<int, int> b) {
  return make_pair(a.first + b.first, a.second + b.second);
}

void solve(void) {
  int n, x;
  cin >> n;
  vector<pair<int, int> > arr(n);
  for (int i=0; i<n; i++) {
    cin >> x;
    if (x % 2 == 0) arr[i] = make_pair(1, 0);
    else arr[i] = make_pair(0, 1);
  }
  SegmentTree<pair<int, int> > st(arr, process);

  int m, a, b, c;
  cin >> m;
  for (int i=0; i<m; i++) {
    cin >> a >> b >> c;
    if (a == 1) {
      if (c % 2 == 0) st.update(b-1, make_pair(1, 0));
      else st.update(b-1, make_pair(0, 1));
    } else if (a == 2) {
      pair<int, int> ans = st.query(b-1, c-1);
      cout << ans.first << "\n";
    } else if (a == 3) {
      pair<int, int> ans = st.query(b-1, c-1);
      cout << ans.second << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}