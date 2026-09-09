//first come first serve scheduling algorithm
#include <iostream>
using namespace std;

int main() {
int n;

cout << "Enter number of processes: ";
cin >> n;

int at[n], bt[n], ct[n], tat[n], wt[n];
cout << "\nEnter Arrival Time and Burst Time:\n";

for (int i = 0; i < n; i++) {
cout << "P" << i + 1 << " Arrival Time: ";
cin >> at[i];

cout << "P" << i + 1 << " Burst Time: ";
cin >> bt[i];
}
for (int i = 0; i < n - 1; i++) {
for (int j = i + 1; j < n; j++) {
if (at[i] > at[j]) {
swap(at[i], at[j]);
swap(bt[i], bt[j]);
}
}
}
ct[0] = at[0] + bt[0];

for (int i = 1; i < n; i++) {
if (ct[i - 1] < at[i])
ct[i] = at[i] + bt[i];
else
ct[i] = ct[i - 1] + bt[i];
}
for (int i = 0; i < n; i++) {
tat[i] = ct[i] - at[i];
wt[i] = tat[i] - bt[i];
}

cout << "\nProcess\tAT\tBT\tCT\tTAT\tWT\n";

float avgWT = 0, avgTAT = 0;

for (int i = 0; i < n; i++) {
cout << "P" << i + 1 << "\t"
<< at[i] << "\t"
<< bt[i] << "\t"
<< ct[i] << "\t"
<< tat[i] << "\t"
<< wt[i] << endl;

avgWT += wt[i];
avgTAT += tat[i];
}

cout << "\nAverage Waiting Time = " << avgWT / n;
cout << "\nAverage Turnaround Time = " << avgTAT / n;

return 0;
}