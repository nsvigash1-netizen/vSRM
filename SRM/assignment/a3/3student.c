#include <stdio.h>
typedef struct {
    int   roll;
    char  name[50];
    float marks;
} Student;
/* Receives a COPY, modifies the copy, returns it */
Student updateMarks(Student s, float newMarks) {
    s.marks = newMarks;
    printf("  Inside function : %s's marks = %.2f\n", s.name, s.marks);
    return s;
}
void display(const char *label, Student s) {
    printf("%s -> Roll: %d, Name: %s, Marks: %.2f\n",
           label, s.roll, s.name, s.marks);
}
int main() {
    Student updated, original = {101, "Arun", 72.50f};
    display("Before call       ", original);
    updated = updateMarks(original, 88.75f);

    display("After call (orig) ", original);
    display("After call (new)  ", updated);

    original = updateMarks(original, 88.75f);
    display("After reassigning ", original);
    return 0;
}
