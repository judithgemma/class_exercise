#include <stdio.h>

struct Student {
    char name[50];
    float subj1;
    float subj2;
    float subj3;
    char grade;
};

char calculateGrade(float avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 80) return 'B';
    else if (avg >= 70) return 'C';
    else if (avg >= 60) return 'D';
    else return 'F';
}

int main() {
    struct Student students[5];
    int i;

    // Input student data
    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Subject 1 marks: ");
        scanf("%f", &students[i].subj1);
        printf("Subject 2 marks: ");
        scanf("%f", &students[i].subj2);
        printf("Subject 3 marks: ");
        scanf("%f", &students[i].subj3);

        float avg = (students[i].subj1 + students[i].subj2 + students[i].subj3) / 3.0;
        students[i].grade = calculateGrade(avg);
    }

    // Display student data
    printf("\n%-20s %-10s %-10s %-10s %-5s\n", "Name", "Subj1", "Subj2", "Subj3", "Grade");
    printf("----------------------------------------------------------\n");
    for (i = 0; i < 5; i++) {
        printf("%-20s %-10.2f %-10.2f %-10.2f %-5c\n", students[i].name, students[i].subj1, students[i].subj2, students[i].subj3, students[i].grade);
    }

    return 0;
}
