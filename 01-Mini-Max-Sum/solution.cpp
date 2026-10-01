void miniMaxSum(vector<int> arr) {
    long long total = 0;
    long long minValue = arr[0];
    long long maxValue = arr[0];

    for (int i = 0; i < 5; i++) {
        total += arr[i];

        if (arr[i] < minValue) {
            minValue = arr[i];
        }

        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }

    long long minSum = total - maxValue;
    long long maxSum = total - minValue;

    cout << minSum << " " << maxSum << endl;
}
