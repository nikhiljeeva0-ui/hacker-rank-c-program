#include <iostream>
#include <vector>
using namespace std;

vector<int> rightToLeft(vector<int> v) {

    int temp = v[0];   // first element store

    for(int i = 0; i < v.size() - 1; i++){
        v[i] = v[i+1]; // shift left
    }

    v[v.size()-1] = temp; // first element last ge

    return v;
}

int main() 
{
    vector<int> v = {1, 3, 5, 5, 9};

    v = rightToLeft(v);

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}