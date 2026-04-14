#include <iostream>
#include <algorithm>
using namespace std;

struct data {
    long long value;
    int id;
};

int main() {
    int t;
    cin>>t;
    while(t--){
    long long n;
    cin >> n;

    data arr[n];


    for (int i = 0; i < n; i++) {
        cin >> arr[i].value;
        arr[i].id = i + 1;  
    }

    sort(arr, arr + n, [](const data& a, const data& b) {
        return a.value < b.value;  
    });

    int cost = 0;
    int oper = 0;

    for (int i = 1; i <= n; i++) {
        if (i != arr[i - 1].id) {
           
            cost += (arr[i - 1].id & arr[arr[i - 1].id - 1].id);  
            oper++;
        }
    }

  
    cout << cost << endl;
    cout << oper << endl;

   
    for (int i = 1; i <= n; i++) {
        if (i != arr[i - 1].id) {
            
            cout << i << " " << arr[i - 1].id << endl;
        }
    }
}
    return 0;
}
