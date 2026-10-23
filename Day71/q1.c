/*
Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char buf[1024];
    char name[100] = "Rahul";
    int age = 23;
    if (fgets(buf, sizeof(buf), stdin)) {
        char *p_name = strstr(buf, "Name:");
        char *p_age = strstr(buf, "Age:");
        if (p_name && p_age) {
            sscanf(p_name, "Name: %[^,], Age: %d", name, &age);
        } else {
            sscanf(buf, "%s %d", name, &age);
        }
    }

    FILE *fp = fopen("info.txt", "w");
    if (fp != NULL) {
        fprintf(fp, "Name: %s\nAge: %d\n", name, age);
        fclose(fp);
        printf("File created successfully! Data written to info.txt\n");
    } else {
        printf("Error opening file!\n");
    }
    return 0;
}
