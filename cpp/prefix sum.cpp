void evenCount(vector<int>& arr,
               vector<vector<int>>& qmat) {

    int n = arr.size();

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            arr[i] = 1;
        else
            arr[i] = 0;
    }

    vector<int> ps(n, 0);

    ps[0] = arr[0];

    for(int i = 1; i < n; i++) {
        ps[i] = ps[i - 1] + arr[i];
    }

    for(auto q : qmat) {

        int s = q[0];
        int e = q[1];

        if(s == 0)
            cout << ps[e] << endl;
        else
            cout << ps[e] - ps[s - 1] << endl;
    }
}
