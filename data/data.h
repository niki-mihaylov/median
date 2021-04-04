#ifndef DATA_H
#define DATA_H

#include <queue>

class Data
{
public:
	void AddNumber(double number);
	double PrintMedian();
	void BalanceQueues();

private:
	std::priority_queue <double> qLeft;
	std::priority_queue <double, std::vector<double>, std::greater<double>> qRight;
};

#endif
