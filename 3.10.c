#include <stdio.h>
#include <stdlib.h>
int main()
{
    char n[10086];
    int i;
    float text;
    FILE * outfile;
    outfile = fopen("text.txt", "w");
    scanf("%s", n);
    while (n[i] != '\0')
    {
        i ++;
    }
    for(int a = 1;a < i;a ++)
    {
        fprintf(outfile, "%c\n", n[a]);
    }
    fclose(outfile);
    return 0;
}
