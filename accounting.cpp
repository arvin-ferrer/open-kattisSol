#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, q;
    cin >> n >> q;

    long long baseline = 0;
    int globalVersion = 0;

    unordered_map<int, pair<long long,int>> personData;

    while (q--) {
        string status;
        cin >> status;
        if (status == "SET") {
            int person;
            long long money;
            cin >> person >> money;
            personData[person] = {money, globalVersion};

        } else if (status == "RESTART") {
            long long money;
            cin >> money;
            baseline = money;
            globalVersion++;

        } else{
            int person;
            cin >> person;
            if (personData.count(person) && personData[person].second == globalVersion) {
                cout << personData[person].first << "\n";
            } else {
                cout << baseline << "\n";
            }
        }
    }
}

