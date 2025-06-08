#include <iostream>

using namespace std;
void sol(){
  long w;
  int s;
  int totalCoins = 0;
  
  cin >> w >> s;
  for (int i = 1; i <= s; ++i){
    totalCoins += i;
  }
  for (int currentStack = 1; currentStack <= s; ++currentStack){
      long weightCurrentStack = currentStack*29370;  
      long weightRemainingCoins = (totalCoins-currentStack)*29260;
      if (w-weightCurrentStack == weightRemainingCoins){
        cout << currentStack << endl;
        break;
      }
  }
  
}
int main(){
  sol();
}
