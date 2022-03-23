#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE* file;
    file = fopen(argv[1], "w");
    printf("file is created %s \n",argv[1]);
    
    fclose(file);
    
    return 0;
}
