#include <stdio.h>

/*
This code is wriiten by @Vxer09_
visit here "https://github.com/Vxer09/betterexe"
it works!
*/

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        FILE* file;
        for (int i = 1; i < argc; i++)
        {
            file = fopen(argv[i], "w");
            printf("File is created %s.\n", argv[i]);
            fclose(file);
        }
    }
    else
    {
        printf("No path specified.\n");
    }

    return 0;
}
