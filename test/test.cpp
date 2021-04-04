#define BOOST_TEST_MODULE SqrTests
#include <boost/test/unit_test.hpp>
#include "../data/data.h"

BOOST_AUTO_TEST_CASE(Empty_Data)
{
	Data data;
	
    BOOST_CHECK_EQUAL(0, data.PrintMedian());
}

BOOST_AUTO_TEST_CASE(One_Number)
{
	Data data;
	
	data.AddNumber(6);
    BOOST_CHECK_EQUAL(6, data.PrintMedian());
}

BOOST_AUTO_TEST_CASE(Two_Numbers)
{
	Data data;
	
	data.AddNumber(7);
	data.AddNumber(8.4);
    BOOST_CHECK_EQUAL(7.7, data.PrintMedian());
}

BOOST_AUTO_TEST_CASE(Add_More_Numbers)
{
	Data data;
	
	data.AddNumber(4);
	data.AddNumber(-5);
	data.AddNumber(7.5);
	data.AddNumber(11);
	data.AddNumber(-2);
    BOOST_CHECK_EQUAL(4, data.PrintMedian());
	
	data.AddNumber(-12);
	BOOST_CHECK_EQUAL(1, data.PrintMedian());
	
	data.AddNumber(21.6);
	data.AddNumber(8);
	data.AddNumber(15);
	BOOST_CHECK_EQUAL(7.5, data.PrintMedian());
	
	data.AddNumber(32);
	BOOST_CHECK_EQUAL(7.75, data.PrintMedian());
}
