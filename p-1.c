#include <stdio.h>
int main()
{
    FILE *inputFile = fopen("p-1_input.txt", "r");
    FILE *outputFile = fopen("p-1_output.txt", "w");
    // printf("%p",inputFile);
    int a;
    while (fscanf(inputFile, "%d", &a) ==1)
    {
        fprintf(outputFile, "%d ", a);
    }

    // for(int i=inputFile; )
}