// Copyright 2021 NNTU-CS

int cbinsearch2(int* arr, int l, int r, int value)
{
	if (r >= l) {
		int m = l + (r - l) / 2;
		if (arr[m] == value)
			return cbinsearch2(arr, l, m - 1, value) + cbinsearch2(arr, m + 1, r, value) + 1;
		if (arr[m] > value)
			return cbinsearch2(arr, l, m - 1, value);
		return cbinsearch2(arr, m + 1, r, value);
	}
	return 0;
}

int cbinsearch(int* arr, int size, int value) {
	return cbinsearch2(arr, 0, size, value);
}
