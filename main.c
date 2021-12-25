#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add_Two (int n);
void check_Eligibility(int x);

struct student_Info {
    int age;
    double grades;
    char name[100];
};

int main()
{
    struct student_Info Chibu;
    printf("Please enter the student's age:");
    printf("\n");
    scanf("%d", &Chibu.age);
    printf("%d\n", add_Two(3));
    printf("Chibu's age is %d\n\n", Chibu.age);
    check_Eligibility (Chibu.age);

    return 0;
}

int add_Two (int n) {
    int result = n + n;
    return result;

}

void check_Eligibility (int x) {
    if (x <= 17 || x >=19 )
        printf("This prospective student is under/over the age limit.\n");
        else
            printf("This prospective student satisfies the age limit. He meets the primary criterion for admission.\n\n");
}
