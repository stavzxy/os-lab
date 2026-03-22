#include <stdio.h>
int main()
{
    int n, i;
    int pid[20], at[20], bt[20], rt[20];
    int ct[20], tat[20], wt[20];
    int completed = 0, current_Eme = 0;
    int min_index, min_rt;
    prinU("Stawan H. Ruiwale, 1WA24CS241\n\n");
    prinU("Enter number of processes: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        prinU("Enter Arrival Time and Burst Time for P%d: ", i + 1);
        scanf("%d %d", &at[i], &bt[i]);
        pid[i] = i + 1;
        rt[i] = bt[i];
    }
    while (completed < n)
    {
        min_rt = 9999;
        min_index = -1;
        for (i = 0; i < n; i++)
        {
            if (at[i] <= current_Eme && rt[i] > 0)
            {
                if (rt[i] < min_rt)
                {
                    min_rt = rt[i];
                    min_index = i;
                }
            }
        }
        if (min_index == -1)
        {
            current_Eme++;
        }
        else
        {
            rt[min_index]--;
            current_Eme++;
            if (rt[min_index] == 0)
            {
                completed++;
                ct[min_index] = current_Eme;
                tat[min_index] = ct[min_index] - at[min_index];
                wt[min_index] = tat[min_index] - bt[min_index];
            }
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