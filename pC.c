#include <stdio.h>
#include <string.h>

int main() {
    char input1[100], input2[100];
    FILE *file_read, *file_write;

    while (1) {
        printf("Please enter the name of the file to read from.\n");
        fgets(input1, sizeof(input1), stdin); // input file name (read)
        input1[strcspn(input1, "\n")] = 0; // remove trailing newline

        // Check if user wants to exit
        if (strcmp(input1, "exit") == 0) {
            break;
        }

        // Check if the file exists
        file_read = fopen(input1, "r"); // try to open the file for reading
        if (file_read == NULL) {
            printf("The file name does not exist.\n");
            continue; // prompt again for the file name
        }
        int a,b,c,d;
        fscanf(file_read, "%d %d %d %d", &a,&b,&c,&d);

        printf("Please enter the name of the file to write the output to.\n");
        fgets(input2, sizeof(input2), stdin); // input file name (write)
        input2[strcspn(input2, "\n")] = 0; // remove trailing newline

        // Open the output file for writing
        file_write = fopen(input2, "w");
        
        int denominator = a*d+b*c;
        int numerator = b*d;
        fprintf(file_write,"%d/%d\n",denominator,numerator);
        printf("Calculation complete!\n");
    }
    // Close files after processing
    fclose(file_read);
    fclose(file_write);
    return 0;
}