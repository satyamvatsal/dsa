#include <cmath>
#include <iostream>
using namespace std;
int binser(int arr[], int n, int k) {
  int start = 0;
  int end = n - 1;
  int mid = start + (end - start) / 2;
  while (start <= end) {
    if (arr[mid] > k)
      end = mid - 1;
    else if (arr[mid] < k)
      start = mid + 1;
    if (arr[mid] == k)
      return mid + 1;
    mid = start + (end - start) / 2;
  }
  return 0;
}
int main() {

  int n, k;
  cin >> n >> k;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int ans = binser(arr, n, k);
  if (ans) {
    cout << "Found at " << ans - 1 << endl;
  } else {
    cout << "Not Found" << endl;
  }
  return 0;
}
