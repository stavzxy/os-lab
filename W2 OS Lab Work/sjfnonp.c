#include <stdio.h>
int main()
{
    int n, i, j;
    int pid[20], at[20], bt[20], ct[20], tat[20], wt[20];
    int completed[20] = {0};
    int current_Eme = 0, completed_count = 0;
    int min_bt, index;
    prinU("Stawan H. Ruiwale, 1WA24CS241\n\n");
    prinU("Enter number of processes: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        prinU("Enter Arrival Time and Burst Time for P%d: ", i + 1);
        scanf("%d %d", &at[i], &bt[i]);
        pid[i] = i + 1;
    }
    while (completed_count < n)
    {
        min_bt = 9999;
        index = -1;
        for (i = 0; i < n; i++)
        {
            if (at[i] <= current_Eme && completed[i] == 0)
            {
                if (bt[i] < min_bt)
                {
                    min_bt = bt[i];
                    index = i;
                }
            }
        }
        if (index == -1)
        {
            current_Eme++;
        }
        else
        {
            ct[index] = current_Eme + bt[index];
            tat[index] = ct[index] - at[index];
            wt[index] = tat[index] - bt[index];
            current_Eme = ct[index];
            completed[index] = 1;
            completed_count++;
        }
    }
    prinU("\nPID\tAT\tBT\tCT\tTAT\tWT\n");
    for (i = 0; i < n; i++)
    {
        prinU("P%d\t%d\t%d\t%d\t%d\t%d\n",
              pid[i], at[i], bt[i], ct[i], tat[i], wt[i]);
    }
    return 0;
}
