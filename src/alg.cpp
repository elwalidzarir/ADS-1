
int cbinsearch(int *arr, int size, int value) {
    int first = 0;
    int last = size - 1;
    int middle = (last + first) / 2;
    int count = 0;
    while (first <= last) {
        if (arr[middle] < value) {
            first = middle + 1;
        } else if (arr[middle] > value) {
            last = middle - 1;
        } else {
            for (int i = first; i<=last; i++) {
                if (arr[i] == arr[middle]) {
                    count++;
                }
            }
            return count;

        }
        middle = (first + last) / 2;
    }
    return count;
}