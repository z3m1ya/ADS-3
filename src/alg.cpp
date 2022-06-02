// Copyright 2021 NNTU-CS

int cbinsearch2(int* a, int l, int r, int v) {
    if (r >= l) {
        int m = l + (r - l) / 2;
        if (arr[m] == v)
            return cbinsearch2(a, l, m - 1, v) + cbinsearch2(a, m + 1, r, v) + 1;
        if (arr[m] > value)
            return cbinsearch2(a, l, m - 1, v);
        return cbinsearch2(a, m + 1, r, v);
    }
    return 0;
}

int cbinsearch(int* arr, int size, int v) {
    return cbinsearch2(arr, 0, size, v;
}
