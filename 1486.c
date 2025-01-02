int xorOperation(int n, int start) {
    int arr[n];
    int xorsum = 0;
    for(int i = 0; i < n; ++i) {
        arr[i] = start+2*i;
        xorsum ^= arr[i];
    }
    return xorsum;
}
