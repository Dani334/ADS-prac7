#include "RecursiveBinarySearch.h"

#include <vector>

bool RecursiveBinarySearch::search(std::vector<int> list, int element) {

    int index = helper(list, element, 0, list.size()-1);

    if(index < 0) {
        return false;
    } else {
        return true;
    }
}

int RecursiveBinarySearch::helper(std::vector<int> list, int element, int start, int end) {

    if(start > end) {
        return -1;
    }

    int middle = (start+end)/2;

    if(list.at(middle) == element) {
        return middle;
    } else if(list.at(middle) > element) {
        return helper(list, element, start, middle-1);
    } else {
        return helper(list, element, middle+1, end);
    }




}