// For more info checkout: http://en.wikipedia.org/wiki/Sorting_algorithm

#include <algorithm>

// Not a stable sort at all. Look into bubble sorts for this.
void unsafe_sort(int a[100], int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++) {
		for(j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				std::swap(a[i], a[j]);
			}
		}
	}
}

// Bubble sort with less than n^2 speed
// also known as Shaker Sort
// http://en.wikipedia.org/wiki/Cocktail_sort
void shaker_sort(int a[], int n)
{
	int i,
		low = 0,
		hi = n - 1,
		last;

	while (low < hi) {
		// upsweep
		for (i = low; i < hi; i++) {
			if (a[i] > a[i + 1]) {
				std::swap(a[i], a[i + 1]);
				last = i;
			}
		}

		// downsweep
		hi = last;

		for (i = last; i > low; --i) {
			if (a[i] < a[i - 1]) {
				std::swap(a[i], a[i - 1]);
				last = i - 1;
			}
		}

		low = i;
	}
}
