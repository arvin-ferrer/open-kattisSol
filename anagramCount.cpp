#include <bits/stdc++.h>
#include <unordered_map>
#include <utility>

using namespace std;
long long fact(int n){

     return (n==0) || (n==1) ? 1 : n* fact(n-1);
}
int main(){
  string ss;
  
  while (cin >> ss){
    unordered_map<char, int> letters;
  

      long long size = ss.size();
      for (auto i: ss){
        if(letters.find(i) == letters.end()){
          letters.insert(make_pair(i, 1));
        }
        else{
          letters[i]++;
        }
      }
      long long product = 1;
      for (auto i: letters){
        product *= fact(i.second);

      }
      cout << fact(size)/product << endl;
      // cout << product;
  }
  

}



