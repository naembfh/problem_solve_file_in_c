#include <stdio.h>
int main()
{
    FILE *inputFile = fopen("p-4_input.txt", "r");
    FILE *outputFile = fopen("p-4_output.txt", "w");

    int a;

    fscanf(inputFile, "%d", &a);
    for (int i = a; i >= 1; i--)
    {
        for (int k = i - 1; k >= 0; k--)
        {
            fprintf(outputFile, " ");
        }
        for (int j = 1; j <= a; j++)
        {
            fprintf(outputFile, "#");
        }
        fprintf(outputFile, "\n");
    }
}