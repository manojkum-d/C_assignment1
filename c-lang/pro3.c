/*3.	Write a C program to read the roll no, name and Semester Marks for 5 Subjects( each Semester) for 3 students  and calculate the total percentage. The conditions must be followed 
If Percentage <= 40 then and Check all the subjects marks if  marks < = 40 then Print Result Fail
Percentage > = 60  and < = 80 then Print Result as First Class 
Percentage > = 80 then < = 90  Print Result as First Class with Distinction
Percentage > = 90 - 100 then Print Result as Outstanding 
Print the Cummulative Mark sheet for all 6 Semesters with each semester 5 subjects and check eligibility to get the degree 
*/


#include <stdio.h>

#define NUM_STUDENTS 3
#define NUM_SEMESTERS 6
#define NUM_SUBJECTS 5

void printResult(float percentage) {
    int percentageCategory = (int)percentage;

    switch (percentageCategory) {
        case 0 ... 40:
            printf("Result: Fail\n");
            break;
        case 41 ... 80:
            printf("Result: First Class\n");
            break;
        case 81 ... 90:
            printf("Result: First Class with Distinction\n");
            break;
        default:
            printf("Result: Outstanding\n");
            break;
    }
}

int main() {
    struct Student {
        char name[50];
        int rollNo;
        int marks[NUM_SEMESTERS][NUM_SUBJECTS];
    } students[NUM_STUDENTS];

    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);

        for (int j = 0; j < NUM_SEMESTERS; j++) {
            printf("Enter marks for Semester %d (5 Subjects):\n", j + 1);
            for (int k = 0; k < NUM_SUBJECTS; k++) {
                printf("Subject %d: ", k + 1);
                scanf("%d", &students[i].marks[j][k]);
            }
            printf("\n");
        }
    }

    for (int i = 0; i < NUM_STUDENTS; i++) {
        for (int j = 0; j < NUM_SEMESTERS; j++) {
            int totalMarks = 0;
            for (int k = 0; k < NUM_SUBJECTS; k++) {
                totalMarks += students[i].marks[j][k];
            }
            float percentage = (float)totalMarks / (NUM_SUBJECTS * 100) * 100;
            printf("Student %d, Semester %d - Percentage: %.2f%%\n", i + 1, j + 1, percentage);
            printResult(percentage);
            printf("\n");
        }
    }

    return 0;
}

/*
            Output:
                    Enter details for Student 1:
Name: manoj
Roll No: 237
Enter marks for Semester 1 (5 Subjects):
Subject 1: 98
Subject 2: 78
Subject 3: 56
Subject 4: 98
Subject 5: 45

Enter marks for Semester 2 (5 Subjects):
Subject 1: 78
Subject 2: 98
Subject 3: 65
Subject 4: 78
Subject 5: 54

Enter marks for Semester 3 (5 Subjects):
Subject 1: 98
Subject 2: 65
Subject 3: 12
Subject 4: 45
Subject 5: 87

Enter marks for Semester 4 (5 Subjects):
Subject 1: 65
Subject 2: 98
Subject 3: 65
Subject 4: 63
Subject 5: 78

Enter marks for Semester 5 (5 Subjects):
Subject 1: 45
Subject 2: 96
Subject 3: 36
Subject 4: 36
Subject 5: 32

Enter marks for Semester 6 (5 Subjects):
Subject 1: 21
Subject 2: 54
Subject 3: 26
Subject 4: 35
Subject 5: 15

Enter details for Student 2:
Name: sujay
Roll No: 359
Enter marks for Semester 1 (5 Subjects):
Subject 1: 78
Subject 2: 98
Subject 3: 25
Subject 4: 48
Subject 5: 66

Enter marks for Semester 2 (5 Subjects):
Subject 1: 78
Subject 2: 98
Subject 3: 58
Subject 4: 49
Subject 5: 68

Enter marks for Semester 3 (5 Subjects):
Subject 1: 48
Subject 2: 54
Subject 3: 78
Subject 4: 95
Subject 5: 78

Enter marks for Semester 4 (5 Subjects):
Subject 1: 48
Subject 2: 79
Subject 3: 69
Subject 4: 15
Subject 5: 24

Enter marks for Semester 5 (5 Subjects):
Subject 1: 15
Subject 2: 78
Subject 3: 96
Subject 4: 89
Subject 5: 21

Enter marks for Semester 6 (5 Subjects):
Subject 1: 12
Subject 2: 14
Subject 3: 15
Subject 4: 21
Subject 5: 48

Enter details for Student 3:
Name: sneha
Roll No: 4216
Enter marks for Semester 1 (5 Subjects):
Subject 1: 26
Subject 2: 45
Subject 3: 48
Subject 4: 78
Subject 5: 98

Enter marks for Semester 2 (5 Subjects):
Subject 1: 16
Subject 2: 65
Subject 3: 48
Subject 4: 12
Subject 5: 21

Enter marks for Semester 3 (5 Subjects):
Subject 1: 26
Subject 2: 24
Subject 3: 45
Subject 4: 56
Subject 5: 35

Enter marks for Semester 4 (5 Subjects):
Subject 1: 48
Subject 2: 98
Subject 3: 65
Subject 4: 48
Subject 5: 21

Enter marks for Semester 5 (5 Subjects):
Subject 1: 15
Subject 2: 89
Subject 3: 78
Subject 4: 48
Subject 5: 65

Enter marks for Semester 6 (5 Subjects):
Subject 1: 35
Subject 2: 15
Subject 3: 78
Subject 4: 68
Subject 5: 59

Student 1, Semester 1 - Percentage: 75.00%
Result: First Class

Student 1, Semester 2 - Percentage: 74.60%
Result: First Class

Student 1, Semester 3 - Percentage: 61.40%
Result: First Class

Student 1, Semester 4 - Percentage: 73.80%
Result: First Class

Student 1, Semester 5 - Percentage: 49.00%
Result: First Class

Student 1, Semester 6 - Percentage: 30.20%
Result: Fail

Student 2, Semester 1 - Percentage: 63.00%
Result: First Class

Student 2, Semester 2 - Percentage: 70.20%
Result: First Class

Student 2, Semester 3 - Percentage: 70.60%
Result: First Class

Student 2, Semester 4 - Percentage: 47.00%
Result: First Class

Student 2, Semester 5 - Percentage: 59.80%
Result: First Class

Student 2, Semester 6 - Percentage: 22.00%
Result: Fail

Student 3, Semester 1 - Percentage: 59.00%
Result: First Class

Student 3, Semester 2 - Percentage: 32.40%
Result: Fail

Student 3, Semester 3 - Percentage: 37.20%
Result: Fail

Student 3, Semester 4 - Percentage: 56.00%
Result: First Class

Student 3, Semester 5 - Percentage: 59.00%
Result: First Class

Student 3, Semester 6 - Percentage: 51.00%
Result: First Class     
        */