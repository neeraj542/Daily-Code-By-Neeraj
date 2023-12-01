#include <bits/stdc++.h>
using namespace std;


void printQueue(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

void interleaveQueue(queue<int>&q){

    if(q.empty()){
        return;
    }

    queue<int>newQueue;

    int n = q.size();
    int k = n/2;
    int cnt=0;


    //pushing half elements of oldQueue to newQueue
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        newQueue.push(temp);
        cnt++;

        if(cnt == k){
            break;
        }
    }

    //start interleaving
    while(!q.empty() && !newQueue.empty()){
        int first = newQueue.front();
        newQueue.pop();
        q.push(first);
        int second = q.front();
        q.pop();
        q.push(second);
    }

    //handling odd case
    if(n&1){
        int element = q.front();
        q.pop();
        q.push(element);
    }
}

int main()
{
    queue<int> q;
    q.push(-20);
    q.push(80);
    q.push(-90);
    q.push(50);
    q.push(30);
    q.push(10);

    // printing original queue:
    cout << "Original Queue: ";
    printQueue(q);

    // priting the interleaved queue
    cout << "Interleaved Queue: ";
    interleaveQueue(q);
    printQueue(q);

    return 0;
}