#include "QuickSort.h"

#include <vector>

#include <iostream>

std::vector<int> QuickSort::sort(std::vector<int> list) {

    list = sortHelper(list, 0, list.size()-1);
    return list;
}


std::vector<int> QuickSort::sortHelper(std::vector<int> list, int start, int end) {

    if(start >= end || start < 0) {
        return list;
    }

    int pivot;

    if(list.size() >= 3) {
        pivot = list.at(2);
    } else {
        pivot = list.at(end/2);
    }

    int i = start - 1;

    for(int j = start; j <= end - 1; j++) {
        if(list.at(j) <= pivot) {
            i++;
            int temp = list.at(j);
            list.at(j) = list.at(i);
            list.at(i) = temp;
        }
    }
    
    i++;
    int temp = list.at(i);
    list.at(i) = list.at(end);
    list.at(end) = temp;

    less = sortHelper(list, start, i - 1);
    greater = sortHelper(list, i + 1, end);

    return greater;

}
