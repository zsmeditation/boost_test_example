#include "b.hpp"
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(b_tests)

BOOST_AUTO_TEST_CASE(subtract_tests)
{
	BOOST_CHECK_EQUAL(b::subtract(8, 6), 2);
}

BOOST_AUTO_TEST_SUITE_END()
