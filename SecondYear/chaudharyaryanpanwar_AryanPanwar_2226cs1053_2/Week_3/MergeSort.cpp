void merge(std::vector<int>& arr, int l, int mid, int r) {
    int len1 = mid - l + 1;
    int len2 = r - mid;

    std::vector<int> first(len1);
    std::vector<int> second(len2);

    // Copy elements into the subarrays
    for (int i = 0; i < len1; i++) {
        first[i] = arr[l + i];
    }
    for (int i = 0; i < len2; i++) {
        second[i] = arr[mid + 1 + i];
    }

    // Merge the two subarrays into the main array
    int index1 = 0;
    int index2 = 0;
    int k = l;
    while (index1 < len1 && index2 < len2) {
        if (first[index1] < second[index2]) {
            arr[k] = first[index1];
            index1++;
        } else {
            arr[k] = second[index2];
            index2++;
        }
        k++;
    }

    while (index1 < len1) {
        arr[k] = first[index1];
        index1++;
        k++;
    }
    while (index2 < len2) {
        arr[k] = second[index2];
        index2++;
        k++;
    }
}

void mergeSort(std::vector<int>& arr, int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;

        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}
