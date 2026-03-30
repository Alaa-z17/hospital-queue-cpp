#pragma once
#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class clsQueue {
private:
    vector<T> _container; 

public:
   
    void push(const T& value) {
        _container.push_back(value);
    }

 
    void pop() {
        if (!empty()) {
            _container.erase(_container.begin());
        }
    }

    T front() const {
        if (!empty()) {
            return _container.front();
        }
        throw runtime_error("Queue is empty!");
    }

    
    T back() const {
        if (!empty()) {
            return _container.back();
        }
        throw runtime_error("Queue is empty!");
    }

    bool empty() const {
        return _container.empty();
    }

    int size() const {
        return (int)_container.size();
    }

    void clear() {
        _container.clear();
    }
};