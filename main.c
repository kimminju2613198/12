
#include <stdio.h>
#include <string.h>

// Define a student structure
struct student {
    int ID;
    char name[10];
    double grade;
};

int main(void) {
    // Declare and initialize a structure variable
    struct student s1 = {24, "Student", 4.3};

    // Modify structure members
    s1.ID = 123456;
    strcpy(s1.name, "Juyeop");
    s1.grade = 4.2;

    // Print the structure members
    printf("ID : %d\n", s1.ID);
    printf("name : %s\n", s1.name);
    printf("grade : %f\n", s1.grade);

    return 0;
}
