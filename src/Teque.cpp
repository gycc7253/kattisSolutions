#include <iostream>
#include <deque>
#include <string>

using namespace std;

class Teque 
{
public:
    deque<int> front;
    deque<int> back;
    int size;
 
    // Default Constructor
    Teque() {
        size = 0;
    }

    bool push_front(int element) {
        front.push_front(element);
        size++;
        while (front.size() > back.size() + 1) {
            back.push_front(front.back());
            front.pop_back();
        }
        display();
        return true;
    }

    bool push_back(int element) {
        back.push_back(element);
        size++;
        while (back.size() > front.size()) {
            front.push_back(back.front());
            back.pop_front();
        }
        display();
        return true;
    }

    bool push_middle(int element) {
        if (front.size() <= back.size()) {
            front.push_back(element);
        } else {
            back.push_front(element);
        }
        size++;
        display();
        return true;
    }

    int get(int index) {
        display();
        if (index < front.size()) {
            return front.at(index);
        } else {
            return back.at(index - front.size());
        }
    }

    void display() {
        // cout << "front: \n";
        // for (int i : front) {
        //     cout << i << " - ";
        // }
        // cout << "\n back: \n";
        // for (int i : back) {
        //     cout << i << " - ";
        // }
        // cout << "\n" << size << "===================\n";
    }
};

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int tc;
    cin >> tc;
    Teque teque;
    
    while (tc-- > 0) {
        string command;
        int element;
        cin >> command >> element;
        if (command == "push_back") {
            teque.push_back(element);
        } else if (command == "push_front") {
            teque.push_front(element);
        } else if (command == "push_middle") {
            teque.push_middle(element);
        } else {
            int g = teque.get(element);
            cout << g << "\n";
        }

    }
    return 0;
}
