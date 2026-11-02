#include <stdio.h>

int main(void)
{
    printf("Введіть три значення: ");
    int t1;
    int t2;
    int t3;
    scanf("%d %d %d", &t1, &t2, &t3);

    double neededTime = 1.0 / (1.0 / t1 + 1.0 / t2 + 1.0 / t3);

    printf("Час, необхідний для з'їдання пирога: %.2f годин", neededTime);

    return 0;
}
