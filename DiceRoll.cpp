#include <iostream>
#include <queue>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    
    int n = 10; 
    int i;
    int key;
    
    priority_queue<int> pq; 
    

    cout << "Rolling the dice " << n << " times:\n";
    for (i = 1; i <= n; i++) {
        key = rand() % 6 + 1; // Get a number between 1 and 6
        pq.push(key);
        cout << key << " ";
    }
    cout << endl;

    // Remove 5 items from the priority queue
    cout << "Removing 5 items from the priority queue:\n";
    for (i = 0; i < 5; i++) {
        if (!pq.empty()) {
            cout << pq.top() << " "; 
            pq.pop();
        }
    }
    cout << endl;

    return 0;
}



