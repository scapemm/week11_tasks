#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
     double vc[n][n];
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j) cin >> vc[i][j];
    }
   double sum=0;
    for(int i=0; i<n; ++i){
        sum+=vc[i][i];
    }
    cout <<  sum << "\n";

    return 0;
}
