#include <iostream>
#include <vector>
#include "Solution.h"



vector<int> Solution::runningSum() {
	for( int i = 1; i < nums.size(); i++) nums[i] += nums[i-1];
        return nums;
}

