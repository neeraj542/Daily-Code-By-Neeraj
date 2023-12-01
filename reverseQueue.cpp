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


void reverseQueue(queue<int> &q)
{

    // 1. Brute Force Approach
    //==> We can use stack, first we'll push all elements in the stack and then after queue empty, we'll again pop elements from the stack. Stack works in LIFO order. So, that's how we can reverse in O(n) time and O(n) space complexity.

    // stack<int> st;

    // while (!q.empty())
    // {
    //     st.push(q.front());
    //     q.pop();
    // }

    // while(!st.empty()){
    //     q.push(st.top());
    //     st.pop();
    // }
    // printQueue(q);


    //2. Recursive Approach: 
    //==> We can also reverse the queue using recursion, we'll have to just handle the one case and rest of will take care by recursion itself. 
    if(q.empty()){
        return;
    }

    int element = q.front();
    q.pop();

    reverseQueue(q);

    q.push(element);

    // Note: The space complexity is also O(n) due to the recursive calls creating a call stack, and each function call has its own set of local variables.
}

int main()
{
    queue<int> q;
    q.push(-20);
    q.push(-80);
    q.push(-90);
    q.push(50);

    // printing original queue:
    cout << "Original Queue: ";
    printQueue(q);

    // printing reversed queue:
    cout << "Reversed Queue: ";
    reverseQueue(q);
    printQueue(q);

    return 0;
}