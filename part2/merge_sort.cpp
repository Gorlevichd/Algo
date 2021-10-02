#include <iostream>
#include <limits>
#include <math.h>

using namespace std;

void merge(int A[], int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1 + 1] = {};
    int R[n2 + 1] = {};
    for (int i = 0; i < n1; i++) {
        L[i] = A[p + i];
        cout << "L" << i << ":" << A[p + i];
    }

    for (int j = 0; j < n2; j++) {
        R[j] = A[q + j + 1];
        cout << "R" << j << ":" << A[q + j + 1];
    }
    int a = std::numeric_limits<int>::max();
    L[n1] = a;
    R[n2] = a;
    int i = 0;
    int j = 0;
    for (int k = p; k <= r; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        }
        else{
            A[k] = R[j];
            j++;
        }
        cout << A[k] << endl;
        if (k == (r - p)) {
            break;
        }
    }
}


void merge_sort(int A[], int p, int r) {
    if (p < r) {
        int q = floor((p + r) / 2);
        cout << p << " " << r;
        merge_sort(A, p, q);
        merge_sort(A, q + 1, r);
        merge(A, p, q, r);
    }
}

int main() {
    int A[4] = {4, 3, 2, 1};
    cout << 1 % 2 << endl;
    merge_sort(A, 0, 3);
    for (int i = 0; i < 4; i++) {
        cout << A[i] << " ";
    }
    return 0;
}