#pragma once

using namespace std;

class Solution {


private:

	vector<int> nums;

public:
        Solution(vector<int> ns) {
		nums = ns;
	}


	vector<int> runningSum();
};

