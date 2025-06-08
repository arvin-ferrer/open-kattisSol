#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr(3);
    cin >> arr[0] >> arr[1] >> arr[2];

    // Sort ascending: arr[0] = smallest, arr[2] = largest
    sort(arr.begin(), arr.end());

    string letters;
    cin >> letters; // e.g. "CAB"

    // Output in the specified order
    for (char c: letters) {
        if (c == 'A') cout << arr[0] << " ";
        else if (c == 'B') cout << arr[1] << " ";
        else cout << arr[2] << " ";

    }
    cout << "\n";
    return 0;
}

