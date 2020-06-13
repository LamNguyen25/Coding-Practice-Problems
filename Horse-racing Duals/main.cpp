#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main()
{
    int N;
    cin >> N; cin.ignore();
    int strength[N];
    for (int i = 0; i < N; i++) {
        int Pi;
        cin >> Pi; cin.ignore();
        strength[i] = Pi;
    }
    int n = sizeof(strength)/sizeof(strength[0]);
    sort(strength, strength+n);
    int diff = 0;
    int min_diff = strength[1] - strength[0];
    for(int i = 2; i < N; i++) {
        diff = strength[i-1] - strength[i];
        if(diff < 0) {
            diff *= -1;
        }
        if(diff < min_diff) {
            min_diff = diff;
        }
     }
    cout << min_diff << endl;
}