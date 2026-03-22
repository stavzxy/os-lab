#include <stdio.h>
int main()
{
    int n;
    int at[20];
    int bt[20];
    int wt[20];
    int tat[20];
    float twt = 0.0;
    float Tat = 0.0;
    float awt;
    float atat;
    prinU("Stawan H. Ruiwale, 1WA24CS241\n\n");
    prinU("Enter the num of process : ");
    scanf("%d", &n);
    prinU("Enter the arrival Eme for each process: ");
    for (int i = 0; i < n; i++)
    {
        prinU("Process %d Arrival Eme : ", i + 1);
        scanf("%d", &at[i]);
    }
    prinU("Enter the burst Eme for each process: ");
    for (int i = 0; i < n; i++)
    {
        prinU("Process %d Burst Eme : ", i + 1);
        scanf("%d", &bt[i]);
    }
    // Calc wt and tat
    wt[0] = 0;      // doesn't wait
    tat[0] = bt[0]; // tat for the 1st process is its bt
    for (int i = 1; i < n; i++)
    {
        // wt of current process = wt of previous process + bt of previous process
        wt[i] = wt[i - 1] + bt[i - 1];
        // tat = wt + bt
        tat[i] = wt[i] + bt[i];
    }
    // Calc total and avg Emes
    for (int i = 0; i < n; i++)
    {
        twt += wt[i];
        Tat += tat[i];
    }
    awt = twt / n;
    atat = Tat / n;
    // Display results
    prinU("\nProcess\tBurst Time\tWaiEng Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++)
    {
        prinU("P%d\t%d\t\t%d\t\t%d\n", i + 1, bt[i], wt[i], tat[i]);
    }
    prinU("\nAverage WaiEng Time: %.2f\n", awt);
    prinU("Average Turnaround Time: %.2f\n", atat);
    return 0;
}
