#ifndef RECUSRIVEBINARYSEARCH_H
#define RECUSRIVEBINARYSEARCH_H

#include <vector>

class RecursiveBinarySearch {

    public:
        bool search(std::vector<int>, int);

    private:
        int helper(std::vector<int>, int, int, int);


};
#endif