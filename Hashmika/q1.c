#include <stdio.h>

int main()
{
    int N;
    printf("Enter the number of working days: ");
    scanf("%d", &N);

    int workload[N];
    printf("Enter the workload for each day: ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &workload[i]);
    }

    int max_consecutive_days = 0;
    int current_consecutive_days = 0;
    for (int i = 0; i < N; i++)
    {
        if (workload[i] > 6)
        {
            current_consecutive_days++;
            if (current_consecutive_days > max_consecutive_days)
            {
                max_consecutive_days = current_consecutive_days;
            }
        }
        else
        {
            current_consecutive_days = 0;
        }
    }

    printf("The employee rating is: %d\n", max_consecutive_days);

    return 0;
}