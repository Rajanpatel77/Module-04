#include <iostream>
using namespace std;

template <typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

template <typename T>
void printArray(const T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArr[] = {64, 34, 25, 12, 22, 11, 90};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);

    cout << "Number:" << endl;
    printArray(intArr, intSize);

    bubbleSort(intArr, intSize);

    cout << "After Sorting:" << endl;
    printArray(intArr, intSize);

    return 0;
}
