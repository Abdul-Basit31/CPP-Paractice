#include <iostream>
using namespace std;

// Function to check if second array is a subarray of the first array and count its occurrences
int countSubarray(int first[], int n, int second[], int m) {
    int count = 0;

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (first[i + j] != second[j]) {
                break;
            }
        }
        if (j == m) { // If second array is found
            count++;
        }
    }

    return count;
}

int main() {
    int first[] = {1, 2, 3, 6, 2, 7, 2, 3};
    int second[] = {2, 3};
    int n = sizeof(first) / sizeof(first[0]);
    int m = sizeof(second) / sizeof(second[0]);

    int occurrences = countSubarray(first, n, second, m);

    if (occurrences > 0) {
        cout << "The second array is a subarray of the first array." << endl;
        cout << "It appears " << occurrences << " times." << endl;
    } else {
        cout << "The second array is not a subarray of the first array." << endl;
    }

    return 0;
}

