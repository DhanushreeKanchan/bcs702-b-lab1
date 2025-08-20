/*description for CIE1.c*/

This C program demonstrates how to measure the execution time of a code segment using the OpenMP library’s high-resolution timer function, omp_get_wtime().
The program performs a simple operation — calculating the square of each integer from 1 to 1,000,000 — inside a loop.
Unlike traditional timing functions like clock(), which measure CPU time and often lack precision for fast-executing code, omp_get_wtime() provides wall-clock time with high precision, 
making it suitable for benchmarking both serial and parallel code sections.
The program records the start time just before the loop and the end time immediately after, then computes and prints the total elapsed time in seconds. This approach is useful for profiling code 
performance and can easily be extended to measure parallelized code execution when using OpenMP directives.
