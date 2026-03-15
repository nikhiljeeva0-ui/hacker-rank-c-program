#include <iostream>
#include <vector>
using namespace std;

vector<int> rightToLeft(vector<int> v , int k ) {
     for(int j  = 1; j<=k ; j++){

     
    int temp = v[0];  

    for(int i = 0; i < v.size() - 1; i++){
        v[i] = v[i+1];
    }

    v[v.size()-1] = temp; 
}

    return v;
}

int main() 
{
    vector<int> v = {1, 3, 5, 5, 9};

    v = rightToLeft(v , 3);

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    

    return 0;
}