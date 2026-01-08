class Solution {
  public:

    int merge(vector<int> &arr, int low, int mid, int high) {
        vector<int> temp;
        int count=0;
        int i = low, j = mid + 1;

        while (i <= mid && j <= high) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i]);
                i++;
            } else {
                temp.push_back(arr[j]);
                j++;
                count += (mid - i + 1);  // ✅ count inversions
            }
        }

        while (i <= mid) temp.push_back(arr[i++]);
        while (j <= high) temp.push_back(arr[j++]);

        // Copy back to original array
        for (int k = 0; k < temp.size(); k++) {
            arr[low + k] = temp[k];
        }
        
        return count;
    }

    int mergesort(vector<int> &arr, int low, int high) {
        if (low >= high) return 0;

        int mid = low + (high - low) / 2;
        int c1= mergesort(arr, low, mid);
        int c2= mergesort(arr, mid + 1, high);
        int c3 = c1+c2+ merge(arr, low, mid, high);
        return c3;
    }

    long long inversionCount(vector<int> &arr) {
       
       return  mergesort(arr, 0, arr.size() - 1);
       
    }
};