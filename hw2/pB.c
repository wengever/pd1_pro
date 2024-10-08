#include <stdio.h>

int main(int argc, char *argv[]) {

    FILE *file;
    file = fopen(argv[1], "r");

    int a,b,c,d;
    fscanf(file, "%d %d %d %d", &a,&b,&c,&d);
    fclose(file);
    
    int denominator = a*d+b*c;
    int numerator = b*d;
    FILE *fptr;
    fptr = fopen("answer.txt","w"); // write mode
    fprintf(fptr,"%d/%d\n",denominator,numerator);
    fclose(fptr);

    return 0;
}