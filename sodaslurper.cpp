#include <bits/stdc++.h>

using namespace std;
#define ll long long 

int main(){
    int e, f, c;
    cin >> e >> f >> c;
    
    int drunk = 0;
    int money = e+f; 
    while(money >= c){
      drunk += money/c;
      money = (money/c) + money%c;
    }
    cout << drunk;
}
