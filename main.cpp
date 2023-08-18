#include <iostream>

using namespace std;

int result = 10000;

template<typename T>
void binarySearch(T arr[], int l, int r, T target) {

    if (l > r) {
        //nothing to do.
        return;
    };

    int mid = l + (r - l) / 2;
    if (arr[mid] == target) {
        cout << "mid value:" << arr[mid] << endl;
        result = mid;
        return;
    }

    binarySearch(arr, l, mid - 1, target);
    binarySearch(arr, mid + 1, r, target);

//    else if (arr[mid] < target) {
//        cout << "arr[mid] value:" << arr[mid] << endl;
//        binarySearch(arr, l, mid - 1, target);
//    } else {
//        cout << "arr[mid] value:" << arr[mid] << endl;
//        binarySearch(arr, mid + 1, r, target);
//    }

}

template<typename T>
int BinarySearchX(T arr[], T target) {
    int l = 0, n = sizeof(arr[0]);


    if (l > n) {
        //nothing to do.
        return -1;
    };

    return n;
}

template<typename T>
void shellSort(T arr[], int step) {
    for (int i = 0; i < step; i++) {
        for (int j = i + step; j < (end(arr) - begin(arr)); j += step) {
            T cur = arr[j];
            T k = j - step;
            while (k > -1) {
                if (arr[k] > cur) {
                    arr[k + step] = arr[k];
                    k = k - step;
                } else {
                    break;
                }
            }
            arr[k + step] = cur;
        }
    }
    if (step > 1) {
        shellSort(arr, step / 2);
    }
}


int main() {

    int data[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    binarySearch<int>(data, 0, 9, 9);

    cout << endl << "result:" << result << endl;

    string sarr[10] = {"the", "word", "is", "empty!", "and", "the", "box", "is", "not", "null!"};

    for (auto s: sarr) {
        cout << s << " ";
    }
    cout << endl;

    cout << "The string array size:" << BinarySearchX<string>(sarr, "is") << endl;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
