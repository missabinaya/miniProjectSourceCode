#include <stdio.h>

main() {
    FILE *fp;
    char ch;
    
    // open a text file for writing into it
    fp = fopen("one.txt", "w");
    
    printf("Enter data");
    
    while ((ch = getchar()) != EOF) {
        putc(ch, fp);
    }
    
    fclose(fp);
    
    // open a text file for reading from it
    fp = fopen("one.txt", "r");
    
    while ((ch = getc(fp)) != EOF)
        printf("%c", ch);
    
    fclose(fp);
}