#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"

#include "RecursiveBinarySearch.h"

#include <vector>
#include <iostream>

using namespace std;

int main() {

    BubbleSort bubbleSort = BubbleSort();

    vector<int> vec1;
    vec1.push_back(5);
    vec1.push_back(1);
    vec1.push_back(4);
    vec1.push_back(2);
    vec1.push_back(8);

    for(int i = 0; i < vec1.size(); i++) {
        cout << vec1.at(i) << " ";
    }
    cout << endl;

    vec1 = bubbleSort.sort(vec1);

    for(int i = 0; i < vec1.size(); i++) {
        cout << vec1.at(i) << " ";
    }
    cout << endl;

    // QuickSort quickSort = QuickSort();

    // vector<int> vec2;
    // vec2.push_back(5);
    // vec2.push_back(1);
    // vec2.push_back(4);
    // vec2.push_back(2);
    // vec2.push_back(8);

    // for(int i = 0; i < vec2.size(); i++) {
    //     cout << vec2.at(i) << " ";
    // }
    // cout << endl;

    // vec2 = quickSort.sort(vec2);

    // for(int i = 0; i < vec2.size(); i++) {
    //     cout << vec2.at(i) << " ";
    // }
    // cout << endl;

    RecursiveBinarySearch recursive = RecursiveBinarySearch();
    vector<int> vec3;
    vec3.push_back(1);
    vec3.push_back(2);
    vec3.push_back(3);
    vec3.push_back(4);
    vec3.push_back(5);
    vec3.push_back(6);
    cout << recursive.search(vec3, 1) << endl;
    cout << recursive.search(vec3, 2) << endl;
    cout << recursive.search(vec3, 3) << endl;
    cout << recursive.search(vec3, 4) << endl;
    cout << recursive.search(vec3, 5) << endl;
    cout << recursive.search(vec3, 6) << endl;
    cout << recursive.search(vec3, 7) << endl; 

}