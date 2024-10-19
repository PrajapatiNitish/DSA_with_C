#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <string>
using namespace std;

bool comparator(pair<int,int> p1, pair<int,int> p2) {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first < p2.first) return true;
    else return false;
}

int main() {
    vector<int> vec = {1,2,3,4,5};

    vector<int> vec2(vec1);
    vec1.erase[vec1.begin()+2];
    vec.insert(2,7);

    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    vector<int> :: iterator it;
    for(it = vec.begin(); it != vec.end(); it++) { //Farward Loop
        cout << *(it) << endl;
    }

    for(auto it = vec.rbegin(); it != vec.rend(); it++) { //Backward Loop
        cout << *(it) << endl;
    }

    list<int> ls;
    ls.push_back(1);
    ls.push_back(2);
    ls.push_front(3);
    ls.push_front(5);

    for(int val : ls) {
        cout << val << " ";
    }
    cout << endl;

    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(3);
    dq.push_front(5);

    for(int val : ls) {
        cout << val << " ";
    }
    cout << endl;

    cout << dq[2] << endl;

    pair<int, int> p = {1, 5};

    cout << p.first << endl;
    cout << p.second << endl;

    pair<int, pair<int, char>> p = {1, {2, 'N'}};
    
    cout << p.second.first << endl;

    vector<pair<int,int>> vec = {{1,2}, {4,5}, {7,8}};

    vec.push_back({3,6});//only add
    vec.emplace_back(3,6);//in-place objects create

    for(auto p : vec) {
        cout << p.first << " " << p.second << endl;
    }

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    stack<int> s2;
    s2.swap(s);

    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    cout << "s size : " << s.size() << endl;
    cout << "s2 size : " << s2.size() << endl;

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    // stack<int> q2;
    // q2.swap(q);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq; //reverse queue
    pq.push(5);
    pq.push(4);
    pq.push(10);
    pq.push(7);

    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    map<string, int> m;
    m["tv - "] = 100;
    m["Laptop - "] = 50;
    m["Phone - "] = 60;
    m["Tablet - "] = 90;
    m["pen - "] = 100;

    m.emplace("cemera - ", 25);
    m.erase("tv - ");

    for(auto p : m) {
        cout << p.first << " " << p.second << endl;
    }
    cout << "count = " << m.count("tv") << endl;

    if(m.find("cemera - ") != m.end()) {
        cout << "found\n";
    }else {
        cout << "not found\n";
    }

    multimap<string, int> m;
    m.emplace("tv - ", 100);
    m.emplace("Laptop - ", 50);
    m.emplace("Phone - ", 60);
    m.emplace("Tablet - ", 90);
    m.emplace("pen - ", 100);

    m.emplace("cemera - ", 25);
    m.erase("tv - ");

    for(auto p : m) {
        cout << p.first << " " << p.second << endl;
    }
    cout << "count = " << m.count("tv") << endl;

    unordered_map<string, int> um;
    um["tv - "] = 100;
    um["Laptop - "] = 50;
    um["Phone - "] = 60;
    um["Tablet - "] = 90;
    um["pen - "] = 100;
    um["Laptop - "] = 50;

    um.emplace("cemera - ", 25);
    um.erase("tv - ");

    for(auto p : um) {
        cout << p.first << " " << p.second << endl;
    }
    cout << "count = " << um.count("tv") << endl;

    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    cout << "lower bound = " << *(s.lower_bound(4)) << endl;
    cout << "upper bound = " << *(s.upper_bound(4)) << endl;
    for(auto val : s) {
        cout << val << " ";
    }
    cout << endl;

    // Algorithm
    vector<int> vec = {3, 5, 1, 8, 2};
    sort(vec.begin(), vec.end());

    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    vector<pair<int,int>> vec = {{3,1}, {2,1}, {7,1}, {5,2}};
    sort(vec.begin(), vec.end(), comparator);

    for(auto p : vec) {
        cout << p.first << " " << p.second << endl;
    }

    string s = "abc";
    next_permutation(s.begin(), s.end());

    cout << s << endl;

    int a = 5, b = 10;
    swap(a,b);
    cout << "a = " << a << endl;

    vector<int> vec = {3, 5, 1, 8, 2};
    cout << *(max(vec.begin(), vec.end())) << endl;
    cout << *(min(vec.begin(), vec.end())) << endl;

    vector<int> vec = {3, 5, 1, 8, 2};
    cout << binary_search(vec.begin(), vec.end(), 10) << endl;

    int n = 15;
    cout << _builtin_popcount(n); << endl;
    cout << _builtin_popcountl(n); << endl;
    cout << _builtin_popcountll(n); << endl;

    return 0;
}