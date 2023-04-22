class Solution{

public:

    vector<long long> smallerSum(int n, vector<int>& arr) {

    vector<pair<int, int>> values(n);

    for (int i = 0; i < n; i++) {

        values[i] = { arr[i], i };

    }

    sort(values.begin(), values.end());

    vector<long long> sums(n, 0);

    long long sum_so_far = 0;

    for (int i = 0; i < n; i++) {

        int value = values[i].first;

        int index = values[i].second;

        if (i > 0 && values[i - 1].first == value) {

            sums[index] = sums[values[i - 1].second];

        } else {

            sums[index] = sum_so_far;

        }

        sum_so_far += value;

    }

    return sums;

}

};
