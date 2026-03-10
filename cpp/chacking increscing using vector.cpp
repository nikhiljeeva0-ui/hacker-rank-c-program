#include <iostream>
#include <vector>
using namespace std;

bool isIncreasing(vector<int> v)
{
    for(int i = 1; i < v.size(); i++)
    {
        if(v[i] < v[i-1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> v = {1, 3, 5, 5, 9};

    if(isIncreasing(v)){
       cout << "True";
    }
       
    else
        cout << "False";

    return 0;
}