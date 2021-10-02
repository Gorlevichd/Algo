#include<iostream>
using namespace std;

int * insertion_sort(int arr[], int length) {
    for (int j = 1; j < length; j++) {
        int i = j - 1;
        int key = arr[j];
        while (i >= 0 & arr[i] > key) {
            arr[i + 1] = arr[i];
            i = i - 1;
        }
        arr[i + 1] = key;
    }
    return arr;
}

int main(){
    int a[4] = {4, 3, 2, 1};
    int length = (sizeof(a) / sizeof(*a));
    int* ptr;
    ptr = insertion_sort(a, length);
    for (int i = 0; i < length; i++) {
        cout << ptr[i] << " ";
        cout << endl;
    } 
    return 0;
}