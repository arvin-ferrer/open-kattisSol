#include <iostream>
#include <unordered_map>
#include <limits.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, int> last_position; // Stores the last index of each language
    int min_distance = n; // Initialize with max possible distance

    for (int i = 0; i < n; i++) {
        int language;
        cin >> language;

        if (last_position.find(language) != last_position.end()) {
            min_distance = min(min_distance, i - last_position[language]);
        }

        last_position[language] = i; // Update last seen index
    }

    cout << min_distance << endl;
    return 0;
}

