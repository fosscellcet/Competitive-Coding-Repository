#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

struct Worker{
    int time, cost,speed;
};

bool compare(Worker a, Worker b) {
    if(a.time==b.time) {
        if(a.speed==b.speed)
            return a.cost<b.cost;
        return a.speed>b.speed;
    }
    return a.time < b.time;
}

int main()
{
    int n;
    ll d;
    cin >> n >> d;
    Worker *workers = new Worker[n];

    for(int i = 0; i < n; i++){
        cin >> workers[i].time >> workers[i].cost >> workers[i].speed;
    }

    sort(workers,workers+n,compare);

    ll currUnits = 0;
    ll cost = 0;
    int lastTime = workers[0].time;
    ll bestSpeed = 0;

    for(int i = 0; i < n; i++){
        currUnits += (bestSpeed * (workers[i].time - lastTime));

        if(currUnits >= d){
            break;
        }
        if(workers[i].speed > bestSpeed){
            bestSpeed = workers[i].speed;
            cost += workers[i].cost;
        }
        lastTime = workers[i].time;
    }

    cout << cost << endl;
    return 0;
}