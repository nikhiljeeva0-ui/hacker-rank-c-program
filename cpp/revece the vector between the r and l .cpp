#include <iostream>
#include <vector>
using namespace std;

void reverseBetween(vector<int> &v, int l, int r) {

    while (l < r) {
        int temp = v[l];
        v[l] = v[r];
        v[r] = temp;

        l++;
        r--;
    }
}

int main() {

    vector<int> v = {1,2,3,4,5,6};

    int l = 1;  // start index
    int r = 4;  // end index

    reverseBetween(v, l, r);

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}