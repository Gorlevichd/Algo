#include<iostream>
#include<math.h>


using namespace std;

int sum_of_binary(int A[], int B[], int len) {
    int real_number = 0;
    for (int i = 0; i < len; i++) {
        int j = A[i] + B[i];
        if (j == 2) {
            real_number += pow(2, (len - 1 - i) + 1);
        }
        else {
            real_number += j * pow(2, (len - 1 - i));
        }
    }
    return real_number;
}

int main() {
    int A[4] = {1, 0, 1, 0};
    int B[4] = {1, 0, 0, 1};
    int len = sizeof(A) / sizeof(*A);
    cout << sum_of_binary(A, B, len) << endl;
    return 0;
}
