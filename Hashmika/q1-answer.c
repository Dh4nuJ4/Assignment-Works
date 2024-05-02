#include <stdio.h>

int main()
{
    // Declare an integer N to store the number of working days
    int N;
    printf("Enter the number of working days: ");
    // Read the number of working days from the user
    scanf("%d", &N);

    // Declare an array to store the workload for each day
    int workload[N];
    printf("Enter the workload for each day: ");
    // Read the workload for each day from the user
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &workload[i]);
    }

    // Declare two integers to store the maximum number of consecutive days
    // the employee has worked more than 6 hours and the current number of such days
    int max_consecutive_days = 0;
    int current_consecutive_days = 0;
    // Iterate over the workload array
    for (int i = 0; i < N; i++)
    {
        // If the employee has worked more than 6 hours on a day
        if (workload[i] > 6)
        {
            // Increase the current number of consecutive days
            current_consecutive_days++;
            // If the current number of consecutive days is greater than the maximum found so far
            if (current_consecutive_days > max_consecutive_days)
            {
                // Update the maximum number of consecutive days
                max_consecutive_days = current_consecutive_days;
            }
        }
        else
        {
            // If the employee has worked 6 hours or less on a day, reset the current number of consecutive days
            current_consecutive_days = 0;
        }
    }

    // Print the employee's rating, which is the maximum number of consecutive days the employee has worked more than 6 hours
    printf("The employee rating is: %d\n", max_consecutive_days);

    return 0;
}
