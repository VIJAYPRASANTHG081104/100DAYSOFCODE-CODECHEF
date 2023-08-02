#include <stdio.h>
#include <string.h>

int main(void) {
    int T;
    scanf("%d", &T);

    while (T--) {
        char A[10001], B[10001];
        scanf("%s", A);
        scanf("%s", B);

        int len_A = strlen(A);
        int len_B = strlen(B);
        int common_count = 0;
        int char_count_A[128] = {0}; // Initialize the hash table with zeros
        int char_count_B[128] = {0};

        // Count occurrences of each character in string A
        for (int i = 0; i < len_A; i++) {
            char_count_A[A[i]]++;
        }

        // Count occurrences of each character in string B
        for (int i = 0; i < len_B; i++) {
            char_count_B[B[i]]++;
        }

        // Find the common characters
        for (int i = 0; i < 128; i++) {
            common_count += (char_count_A[i] < char_count_B[i]) ? char_count_A[i] : char_count_B[i];
        }

        printf("%d\n", common_count);
    }

    return 0;
}
