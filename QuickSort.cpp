#include "QuickSort.h"

#include <vector>

#include <iostream>

std::vector<int> QuickSort::sort(std::vector<int> list) {

    if(list.size() < 2) {
        return list;
    }

    // for(int i = 0; i < list.size(); i++) {
    //     std::cout << list.at(i) << " ";
    // }
    // std::cout << std::endl;

    int pivot;

    if(list.size() > 2) {
        pivot = list.at(2);
        list.erase(list.begin() + 2);
    } else {
        pivot = list.at(0);
        list.erase(list.begin());
    }

    for(int i = 0; i < list.size(); i++) {
        if(list.at(i) < pivot) {
            less.push_back(list.at(i));
        } else {
            greater.push_back(list.at(i));
        }
    }

    sort(less);
    sort(greater);

    // less.push_back(pivot);
    // for(int i = 0; i < greater.size(); i++) {
    //     less.push_back(greater.at(i));
    // }

    return list;

    


}