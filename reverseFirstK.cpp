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

// 1. Approach:
// ==>We can follow these steps to solve this problem:
// a) First insert the k elements in the stack
// b) simply pop elements from stack & push in queue.
// c) first pop n-k elements and then push in the queue.

void reverseFirstK(queue<int> &q, int k)
{
    stack<int> st;
    int cnt = 0;
    int n = q.size();

    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        st.push(temp);

        cnt++;
        if (cnt == k)
            break;
    }

    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    cnt = 0;

    while (!q.empty() && (n - k) != 0)
    {
        int temp = q.front();
        q.pop();
        q.push(temp);
        cnt++;
        if (cnt == (n - k))
        {
            break;
        }
    }
}
int main()
{
    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(8);
    q.push(12);
    q.push(15);

    cout << "Original Queue: " << endl;
    printQueue(q);

    cout << "After reversing first 3 elements: " << endl;
    reverseFirstK(q, 3);
    printQueue(q);
    return 0;
}