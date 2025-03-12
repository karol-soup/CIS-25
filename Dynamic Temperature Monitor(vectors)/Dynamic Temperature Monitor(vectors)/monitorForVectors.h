#ifndef _MONITORFORVECTORS
#define _MONITORFORVECTORS

namespace manic {
#include<vector>
	using namespace std;
	int getSize();
	int getWindow(int size);
	void highestTempRead(const vector<int> &temperatures, int windowSize);
	void minAndMax(const vector<int> &temperatures);
	void getTemps(vector<int>& temperatures);
}
#endif