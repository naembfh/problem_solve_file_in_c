#include <stdio.h>
int main()
{
    FILE *inputFile = fopen("p-2_input.txt", "r");
    FILE *outputFile = fopen("p-2_output.txt", "w");
    int n;
    fscanf(inputFile, "%d", &n);
    for (int i = 1; i <= n; i++)
    {

        fprintf(outputFile, "%d ", i);
    }
}