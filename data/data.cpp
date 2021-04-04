#include "data.h"

void Data::AddNumber(double number)
{
	if (qLeft.empty())
	{
		qLeft.push(number);
	}
	else if (qRight.empty())
	{
		qRight.push(number);
	}
	else if (number < qLeft.top())
	{
		qLeft.push(number);
	}
	else
	{
		qRight.push(number);
	}
	BalanceQueues();
}

double Data::PrintMedian()
{
	if ((qLeft.size() == 0) && (qRight.size() == 0))
	{
		return 0.0;
	}
	else if (qLeft.size() > qRight.size())
	{
		return qLeft.top();
	}
	else if (qRight.size() > qLeft.size())
	{
		return qRight.top();
	}
	else
	{
		return (qLeft.top() + qRight.top()) / 2;
	}
}

void Data::BalanceQueues()
{
	if (qLeft.size() > (qRight.size() + 1))
	{
		qRight.push(qLeft.top());
		qLeft.pop();
	}
	if (qRight.size() > (qLeft.size() + 1))
	{
		qLeft.push(qRight.top());
		qRight.pop();
	}
}
