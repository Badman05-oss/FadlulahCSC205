//Working of relational operatrors
#include <stdio.h>
int main()
{
    int grade_1,grade_2,grade_3;
    printf("Enter First score : ");
    scanf("%d", &grade_1);
    printf("Enter Second score : ");
    scanf("%d", &grade_2);
    printf("Enter Third score : ");
    scanf("%d", &grade_3);
    
    printf("%d == %d is %d \n", grade_1, grade_2 , grade_1 == grade_2);
    printf("%d == %d is %d \n", grade_1, grade_3 , grade_1 == grade_3);
    printf("%d > %d is %d \n", grade_1, grade_2, grade_1 > grade_2);
    printf("%d > %d is %d \n", grade_1, grade_3, grade_1 > grade_3);
    printf("%d < %d is %d \n", grade_1, grade_2, grade_1 < grade_2);
    printf("%d < %d is %d \n", grade_1, grade_3, grade_1 < grade_3);
    printf("%d != %d is %d \n", grade_1, grade_2, grade_1 != grade_2);
    printf("%d != %d is %d \n", grade_1, grade_3, grade_1 != grade_3);
    printf("%d >= %d is %d \n", grade_1, grade_2, grade_1 >= grade_2);
    printf("%d >= %d is %d \n", grade_1, grade_3, grade_1 >= grade_3);
    printf("%d <= %d is %d \n", grade_1, grade_2, grade_1 <= grade_2);\
    printf("%d <= %d is %d \n", grade_1, grade_3, grade_1 <= grade_3);
    
    return 0;
}
