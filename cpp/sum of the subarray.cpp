#include <iostream>
#include <vector>
using namespace std;

long sumAll(vector<int>& arr) {
    long sum = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        sum += arr[i] * (i + 1) * (n - i);  
    }
    return sum;  
}

int main() {
    vector<int> arr = {3, 4, 2};
    cout << sumAll(arr) << endl;
    return 0;
}
