#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
     int vc[n][4];
    for(int i=0; i<n; ++i){
        for(int j=0; j<4; ++j) cin >> vc[i][j];
    }
   for(int i=0; i<4; ++i){
       int sum = 0;
       for(int j=0; j<n; ++j){
           sum +=vc[j][i];
       }
       cout << "column "<< i << "=" << sum << "\n";
    }
    return 0;
}
