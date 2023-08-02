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


int main() {

    int data[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    binarySearch<int>(data, 0, 9, 9);

    cout << endl << "result:" << result << endl;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
