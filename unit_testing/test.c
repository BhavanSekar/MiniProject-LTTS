#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"Variables.c"
#include"unity.c"
void setUp()
{

}
void tearDown(void){

}
void testGrade(void){
    TEST_ASSERT_EQUAL(test_gpa, final_gpa);
}
  int compute_grade() {
        gpa = 0.0; 
        totCredit = 0.0;
        /* get the letter grade and credits from the user */
        printf("Letter Grade and Credits for each subject:\n");
        for (i = 0; i < 5; i++) {
                printf("Subject %d(Grade|Credit):", i + 1);
                ch = getchar();
                grade[i] = ch;
                scanf("%f", &credit[i]);
        }

        /* print the input grades and credits */
        printf("\nSubject | Grade | Credit\n");
        for (i = 0; i < 5; i++) {
                printf("   %d    |  %c    | %.0f\n", i + 1, grade[i], credit[i]);
        }

        /* calculate gpa value */
        for (i = 0; i < 5; i++) {
                switch (grade[i]) {
                        case 'S':
                                gpa = gpa + 10 * credit[i];
                                totCredit = totCredit + credit[i];
                                break;
                        case 'A':
                                gpa = gpa + 9 * credit[i];
                                totCredit = totCredit + credit[i];
                                break;

                        case 'B':
                                gpa = gpa + 8 * credit[i];
                                totCredit = totCredit + credit[i];
                                break;

                        case 'C':
                                gpa = gpa + 7 * credit[i];
                                totCredit = totCredit + credit[i];
                                break;

                        case 'D':
                                gpa = gpa + 6 * credit[i];
                                totCredit = totCredit + credit[i];
                                break;

                        case 'E':
                                gpa = gpa + 5 * credit[i];
                                totCredit = totCredit + credit[i];
                                break;

                        default:
                                printf("Given Wrong grade!!\n");
                                exit(0);

                }
        }
        gpa = gpa / totCredit;
        final_gpa=gpa;
        printf("GPA for your score: %.2f\n", final_gpa);
        printf("Enter actual cgpa for unit testing");
        scanf("%f", &test_gpa);
        return final_gpa;
  }
  int main()
{
    
    UNITY_BEGIN();
    RUN_TEST(testGrade);
    return UNITY_END();
}
