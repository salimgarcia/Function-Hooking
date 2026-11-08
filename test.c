//Salim Garcia

#include <stdio.h>

int main() {
    
    char text[] = "Hello World";
    int len = sizeof(text) / sizeof(text[0]);
    char buffer[len];
    
    //open file
    FILE *file = fopen("test.txt", "w+");

    if (file == NULL) {
        printf("Error opening file\n");
        return 0;
    }

    //write file
    fwrite(text, sizeof(char), len - 1, file);
    
    //read file
    fread(buffer, sizeof(char), len, file);
    printf("%s\n", text);
    
    //close file
    fclose(file);
    return 0;
}