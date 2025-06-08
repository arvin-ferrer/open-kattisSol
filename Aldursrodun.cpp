#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
  if (b == 0){
    return a;
  }
  else{
    return gcd(b, a%b);
  }
}

int main(){
  int n, num;
  vector <int> nums;
  cin >> n;
  while (n--){
    cin >> num;
    nums.push_back(num);
  }
  for (int i = 0; i < nums.size()-1; i++){
    // cout << gcd(nums[i], nums[i+1]);
    if (gcd(nums[i], nums[i+1]) > 1){
        int temp = nums[i];
        nums[i] = nums[i+1];
        nums[i+1] = temp;
    } 
  }
  for (int i: nums){
    cout << i << ' ';
  }
}
