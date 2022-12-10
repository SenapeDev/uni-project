#include <stdio.h>

// change the value below to change the number of students
#define N 10


// change the value below to change the maximum size of name and surname
#define SIZE 20


// every student has a name, a surname and numeric student ID
struct struct_student {

    char name[SIZE];
    char surname[SIZE];
    int student_ID;

} student_input[N];     // contains the students entered by the user


// 'sorted students' contains the students sorted by their student ID
struct struct_student sorted_students[N];



int main() {


    for (int i=0; i<N; i++) {

        int target = 0;

        printf("Enter name, surname and student ID of the student %d: ", i+1);
        scanf("%s %s %d", student_input[i].name, student_input[i].surname, &student_input[i].student_ID);


        // if the student entered is the first, the program adds the student in the sorted students 'list'
        // skipping the ID checking (because the 'list' it's empty)
        if (i==0) {
            sorted_students[i] = student_input[i];            
        } else {


            // the program check if the entered student ID is greater than the 'target' element
            while (student_input[i].student_ID > sorted_students[target].student_ID && target < i) {
                target++;
            }


            // when the program finds that student ID entered is less than 'target' element, it moves all
            // value to the right of the 'list' 
            for (int j=i; j>target; j--) {
                sorted_students[j] = sorted_students[j-1];
            }


            // when all values in the 'list' have been moved, the program adds the entered ID into the correct position
            sorted_students[target] = student_input[i];

        }

    }

    printf("\nYou entered the students in the following way:\n\n");

    for(int i=0; i<N; i++) {
        printf("Name:\t\t %s\nSurname:\t %s\nStudent ID:\t %d\n\n", student_input[i].name, student_input[i].surname, student_input[i].student_ID);
    }

    printf("I sorted them according to their student ID:\n\n");
    for(int i=0; i<N; i++) {
        printf("Name:\t\t %s\nSurname:\t %s\nStudent ID:\t %d\n\n", sorted_students[i].name, sorted_students[i].surname, sorted_students[i].student_ID);
    }

    return 0;
}

