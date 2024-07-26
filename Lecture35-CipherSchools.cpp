#include <iostream>
#include <stack>   // For stack
#include <queue>   // For queue
#include <map>     // For map
#include <list>    // For list

using namespace std;

int main() {
    // Stack
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << "Stack top: " << s.top() << endl; // 3
    s.pop();
    cout << "Stack top after pop: " << s.top() << endl; // 2

    // Queue
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << "Queue front: " << q.front() << endl; // 1
    q.pop();
    cout << "Queue front after pop: " << q.front() << endl; // 2

    // Map
    map<int, string> m;
    m[1] = "One";
    m[2] = "Two";
    m[3] = "Three";
    cout << "Map elements: ";
    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " => " << it->second << ", ";
    }
    cout << endl;

    // List
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(0);
    cout << "List elements: ";
    for (auto it = l.begin(); it != l.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
