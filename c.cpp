#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int t = 1; t <= T; ++t) {
        int PA, PB, PC;
        cin >> PA >> PB >> PC;
        
        if (PA + PB + PC > 9) {
            cout << "Case " << t << ": invalidum" << endl;
            continue;
        }
        
        else {
            cout << "Case " << t << ": perfectus" << endl;
        }
    }

    return 0;
}
