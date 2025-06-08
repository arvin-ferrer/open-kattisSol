#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sol() {
    int arr[6];
    vector <int> arr1;
    vector <int> arr2;
    int height1, height2;

    for (int i = 0; i < 6; ++i) {
        cin >> arr[i];
    }

    cin >> height1 >> height2;

    for (int i = 0; i < 6; ++i){
      for (int j = i+1; j < 6; ++j){
        for (int k = j+1; k < 6; ++k){
          if (arr[i] + arr[j] + arr[k] == height1){
              arr1.push_back(arr[i]);
              arr1.push_back(arr[j]);
              arr1.push_back(arr[k]);
          }
          else if(arr[i] + arr[j] + arr[k] == height2){
            arr2.push_back(arr[i]);
            arr2.push_back(arr[j]);
            arr2.push_back(arr[k]);
          }
        }
      }
    }
    sort(arr1.begin(), arr1.end(), greater<>());
    sort(arr2.begin(), arr2.end(), greater<>());
    cout << arr1[0] << " "<< arr1[1]  <<" "<< arr1[2]<< " ";  
    cout << arr2[0] << " "<< arr2[1]  <<" "<< arr2[2] << endl;  
    


}  


int main(){

  sol();

}
