#include <stdio.h>
#include <omp.h>  // Include OpenMP library

int main() {
    double start, end, time_taken;

    start = omp_get_wtime();  // Start time

    // Simple operation: Square numbers from 1 to 1,000,000
    for (int i = 1; i <= 1000000; i++) {
        int x = i * i;
    }

    end = omp_get_wtime();  // End time

    time_taken = end - start;

    printf("Execution time = %f seconds\n", time_taken);

    return 0;
}
