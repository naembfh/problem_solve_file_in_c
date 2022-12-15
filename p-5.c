#include <stdio.h>
int main()
{
    FILE *input = fopen("p-5_input.txt", "r");
    FILE *output = fopen("p-5_output.txt", "w");
    int a;
    fscanf(input, "%d", &a);
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        int digits;
        fscanf(input, "%d", &digits);
        int last_digit = digits % 10;
        sum += last_digit;
    }
    fprintf(output, "sum --->> %d", sum);
}