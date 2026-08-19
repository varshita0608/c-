//first come first serve scheduling algorithm
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of processes: ";
    cin>>n;
    int bt[n], wt[n], tat[n];
    float awt=0, atat=0;
    for(int i=0;i<n;i++){
        cout<<"Enter the burst time of process: "<<i+1<<"";
        cin>>bt[i];
    }
    wt[0]=0;
    for(int i=1;i<n;i++){
        wt[i]=wt[i-1]+bt[i-1];
    }
    for(int i=0;i<n;i++){
        tat[i]=wt[i]+bt[i];
    }
    for(int i=0;i<n;i++){
        awt+=wt[i];
        atat+=tat[i];
    }
    cout<<"Average waiting time: "<<awt/n<<endl;
    cout<<"Average turnaround time: "<<atat/n<<endl;
    return 0;
}   