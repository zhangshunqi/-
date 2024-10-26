#include <stdio.h>

int main()
{
    FILE * infile;
    char n[10086];
    infile = fopen("scores.txt", "r");
    while (fgets(n, sizeof(n), infile)!= NULL)
    {
        printf("%s", n);
    }
    fclose(infile);
    return 0;
}
