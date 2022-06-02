// Copyright 2021 NNTU-CS

int cbinsearch2(int* a, int l, int r, int v) {
    if (r >= l) {
        int m = l + (r - l) / 2 - 1;
        if (arr[m + 1] == v)
            return cbinsearch2(a, l, m, v) + cbinsearch2(a, m + 2, r, v) + 1;
        if (arr[m + 1] > value)
            return cbinsearch2(a, l, m, v);
        return cbinsearch2(a, m + 2, r, v);
    }
    return 0;
}

int cbinsearch(int* a, int size, int v) {
    return cbinsearch2(a, 0, size, v);
}
