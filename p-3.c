#include <stdio.h>
int main()
{
    FILE *inputFile = fopen("p-3_input.txt", "r");
    FILE *outputFile = fopen("p-3_output.txt", "w");
    int t;
    fscanf(inputFile, "%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int a;
        fscanf(inputFile, "%d", &a);
        if (a > 0)
        {
            for (int i = a; i >= (-a); i--)
            {
                fprintf(outputFile, "%d ", i);
            }
            fprintf(outputFile, "\n");
        }
        else
        {
            for (int i = a; i <= -(a); i++)
            {
                fprintf(outputFile, "%d ", i);
            }
            fprintf(outputFile, "\n");
        }
    }
}