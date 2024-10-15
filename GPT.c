#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100
#define MAX_STUDENTS 100

typedef struct {
    char name[MAX_NAME_LENGTH];
    int age;
    float gpa;
} Student;

void read_students_from_file(const char* filename, Student students[], int* count) {
    FILE* file = fopen(filename, "r");
    if (!file) {
        fprintf(stderr, "Error opening file %s\n", filename);
        exit(1);
    }

    *count = 0;
    while (fscanf(file, "%s %d %f", students[*count].name, &students[*count].age, &students[*count].gpa) == 3) {
        (*count)++;
    }

    fclose(file);
}

void write_students_to_file(const char* filename, Student students[], int count) {
    FILE* file = fopen(filename, "w");
    if (!file) {
        fprintf(stderr, "Error opening file %s\n", filename);
        exit(1);
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "%s %d %.2f\n", students[i].name, students[i].age, students[i].gpa);
    }

    fclose(file);
}

void sort_students_by_gpa(Student students[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (students[j].gpa < students[j + 1].gpa) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void print_students(Student students[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Name: %s, Age: %d, GPA: %.2f\n", students[i].name, students[i].age, students[i].gpa);
    }
}

int main() {
    Student students[MAX_STUDENTS];
    int student_count;

    read_students_from_file("students.txt", students, &student_count);
    printf("Students read from file:\n");
    print_students(students, student_count);

    sort_students_by_gpa(students, student_count);
    printf("\nStudents sorted by GPA:\n");
    print_students(students, student_count);

    write_students_to_file("sorted_students.txt", students, student_count);
    printf("\nSorted students written to file sorted_students.txt\n");

    return 0;
}

