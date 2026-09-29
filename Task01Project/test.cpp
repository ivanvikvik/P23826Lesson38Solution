#include "test.h"

void test(int number, int expected, string test_name) {
	int actual = get_max_digit(number);

	string msg = test_name + " --> ";

	msg += actual == expected ? "PASS" : "FAIL";

	cout << msg << endl;
}

void run_all_tests() {
	test(29357, 9, "test01");
	test(9357, 9, "test02");
	test(23579, 9, "test03");
	test(-23857, 8, "test04");
	test(11111, 1, "test05");
	test(-11111, 1, "test06");
	test(2, 2, "test07");
	test(-3, 3, "test08");
	test(0, 0, "test09");
}