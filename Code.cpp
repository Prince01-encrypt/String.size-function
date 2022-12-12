#include <iostream>
#include <cmath>
#include <algorithm>
#define ll long long
 
using namespace std;
 
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    bool check = false;
    int n = s1.size();

    for(int i =  0, j = n - 1; s1[i] != '\0'; i++, j--) {
        if(s1[i] != s2[j]) {
            cout << "NO";
            check = true;
            break;
        }
    }
    if(!check) {
        cout << "YES";
    }
    return 0;
}
