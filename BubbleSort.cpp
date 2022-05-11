#include "BubbleSort.h"

#include <vector>

std::vector<int> BubbleSort::sort(std::vector<int> list) {

    if(list.size() < 2) {
        return list;
    }

    for(int i = list.size()-1; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            if(list.at(j) > list.at(j+1)) {
                int temp = list.at(j+1);
                list.at(j+1) = list.at(j);
                list.at(j) = temp;
            }
        }
    }

    return list;

}