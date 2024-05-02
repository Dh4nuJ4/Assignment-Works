# Employee Rating Calculator and Grid Path Finder

This repository contains two C programs: one for calculating an employee's rating based on their workload, and another for finding paths in a grid.

## Employee Rating Calculator (10 marks)

The first program calculates an employee's rating based on their workload over the last N working days. The employee's rating is determined by the maximum number of consecutive working days when the employee has worked more than 6 hours.

**Usage:**
1. Run the program.
2. Enter the number of working days (N).
3. Enter the workload for each day. The workload should be entered as a space-separated list of integers, where each integer represents the number of hours worked on a particular day.
4. The program will print the employee's rating.

**Example:**
```
Enter the number of working days: 12
Enter the workload for each day: 2 3 7 8 7 6 3 8 12 11 12 10
The employee rating is: 5
```
In this example, the maximum number of consecutive working days when the employee has worked more than 6 hours is 5. Therefore, the employee's rating is 5.

## Grid Path Finder (20 marks)

The second program calculates the number of ways to reach the bottom-right cell from the top-left cell in a given grid. The grid consists of unblocked cells (represented by 0) and blocked cells (represented by 1). The rules for movement are as follows:

1. You can move right to the very next cell which is not blocked.
2. You can move down to the very next cell which is not blocked.

**Usage:**
1. Run the program.
2. Enter the number of rows (N) and columns (M).
3. Enter the grid values. Each row of the grid should be entered on a new line, with the values in the row separated by a space. A `0` represents an unblocked cell, and a `1` represents a blocked cell.
4. The program will print the number of ways to reach the bottom-right cell from the top-left cell.

**Example:**
```
Enter the number of rows (N) and columns (M): 3 3
Enter the grid values:
0 0 0
0 1 0
0 0 0
The number of ways to reach (3,3) from (1,1) is 4
```
In this example, there are 4 ways to reach cell (3,3) from cell (1,1) in the given grid.
