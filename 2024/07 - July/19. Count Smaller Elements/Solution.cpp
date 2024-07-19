class Solution {
public:
    vector<int> res;

    void merge(vector<pair<int, int>>& arr, int left, int mid, int right) {
        vector<pair<int, int>> temp(right - left + 1);
        int i = left, j = mid + 1, k = 0, count = 0;

        while (i <= mid && j <= right) {
            if (arr[i].first <= arr[j].first) {
                res[arr[i].second] += count;
                temp[k++] = arr[i++];
            } else {
                count++;
                temp[k++] = arr[j++];
            }
        }

        while (i <= mid) {
            res[arr[i].second] += count;
            temp[k++] = arr[i++];
        }

        while (j <= right) {
            temp[k++] = arr[j++];
        }

        for (int i = left; i <= right; i++) {
            arr[i] = temp[i - left];
        }
    }

    void mergeSort(vector<pair<int, int>>& arr, int left, int right) {
        if (left >= right) return;
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }

    vector<int> constructLowerArray(vector<int> &arr) {
        int n = arr.size();
        res.resize(n, 0);
        vector<pair<int, int>> temp;
        
        for (int i = 0; i < n; ++i) {
            temp.push_back({arr[i], i});
        }
        
        mergeSort(temp, 0, n - 1);
        
        return res;
    }
};
