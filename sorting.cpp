#include <bits/stdc++.h>
using namespace std;

void displayVecor(vector<int> vec) {
    for(int i: vec) {
        cout << i << "=>";
    }
    cout << endl;
}

void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

vector<int> selectionSorting(vector<int> inputArr) {
    vector<int> result = inputArr;;

    for(int i = 0; i < result.size(); i++) {
        int min = result[i];
        bool isSwap = false;
        for(int j = i + 1;j < result.size(); j++) {
            if(result[i] > result[j]) {
                int temp = result[i];
                result[i] = result[j];
                result[j] = temp;
            }
            isSwap = true;
        }
        if(!isSwap) break;
    }
    return result;
};

vector<int> bubbleSorting(vector<int> inputArr) {
    for(int i = 0; i < inputArr.size() - 1; i++) {
        for(int j = 0; j < (inputArr.size() - 1 - i); j++) {
            if(inputArr[j] > inputArr[j+1]) {
                int temp = inputArr[j];
                inputArr[j] = inputArr[j+1];
                inputArr[j+1] = temp;
            }
        }
    }

    return inputArr;
};

vector<int> insertionSorting(vector<int> inputArr) {
    for(int i = 0; i < inputArr.size(); i++) {
        int j = i;
        while (j > 0)
        {
            if(inputArr[j-1] > inputArr[j]) {
                int temp = inputArr[j];
                inputArr[j] = inputArr[j-1];
                inputArr[j-1] = temp;
            } else break;
            j--;
        }
    }
    return inputArr;
}

vector<int> mergeSorting(vector<int> &inputArr, int start, int end) {
    if(end - start > 2) {
        int mid = (start + end) % 2 ? (start + end + 1) / 2 : (start + end) / 2;
        mergeSorting(inputArr, start, mid);
        mergeSorting(inputArr, mid, end);

        for(int i = 0; i <= mid; i++) {
            int j = 0;
            while (j < (end - mid))
            {
                if(inputArr[i] > inputArr[mid + j]) swap(inputArr[i], inputArr[mid + j]);
                j++;
            }
            
        }
    } else {
        if(inputArr[start] > inputArr[end - 1]) swap(inputArr[start], inputArr[end - 1]);
    }
     
    return inputArr;
}

int main() { 
    cout << "Sorting" << endl;
    vector<int> arr = {52, 58, -1, 78, 69, 23, 5, 6, 45, 574, 87, 54, 51, 12};
    // arr = {56,2,8,45, 5, 89};

    // Method 1 => Sorting using selection sorting method.
    // SELECTION SORTING => Find the minimum number and swap the postion
    // For example { 52, 58, 78, 69, 23 }
    // Step 1 { 23, 58, 78, 69, 52 }
    // Step 2 { 23, 52, 78, 69, 58 }
    // Step 3 { 23, 52, 58, 69, 78 } Array is sorted

    // Time complexity ==> n+(n-1)+(n-2)+ ... + 1 = n(n-1)/2 ==> n^2
    // So Best/Worst/Average ==> O(n^2)

    // vector<int> res1 = selectionSorting(arr);

    // Method 2 => Sorting using bubble sorting method.
    // Bubble SORTING => Find the minimum number and swap the postion
    // For example { 52, 58, 78, 69, 23 } comparing two adjacent number and swap
    // Time complexity ==> n+(n-1)+(n-2)+ ... + 1 = n(n-1)/2 ==> n^2
    // So Worst/Average ==> O(n^2)
    // Best is o(n)

    // vector<int> res2 = bubbleSorting(arr);

    // Method 3 ==> Insertion sort
    // Comparing current element with previous element and moving towards the left until the proper postion is achieved.
    // Time complexity ==> n+(n-1)+(n-2)+ ... + 1 = n(n-1)/2 ==> n^2
    // So Worst/Average ==> O(n^2)
    // Best is o(n)

    // vector<int> res3 = insertionSorting(arr);

    // Method 4 ==> Merge sorting
    // Also knows as divide and conquer method
    vector<int> res4 = mergeSorting(arr, 0, arr.size());

    displayVecor(arr);

    cout << endl << endl;
}