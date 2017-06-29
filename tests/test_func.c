#include <ctest.h>
#include "../src/function.h"

CTEST(Check_test_1, input_1)
{
    int result = Check(1, 1, 1, 1);
    int expected = 2;
    ASSERT_EQUAL(expected, result);
}

CTEST(Check_test_2, input_m1)
{
    int result = Check(-1, 1, 0, 1);
    int expected = 5;
    ASSERT_EQUAL(expected, result);
}

CTEST(Check_test_3, input_0)
{
    int result = Check(0, 0, 1, 1);
    int expected = 3;
    ASSERT_EQUAL(expected, result);
}

CTEST(Disc_test_1, input_3_2_1)
{
    int result = Discriment(3, 2, 1);
    int expected = -8;
    ASSERT_EQUAL(expected, result);
}

CTEST(Disc_test_2, input_0_4_2)
{
    int result = Discriment(0, 4, 2);
    int expected = 16;
    ASSERT_EQUAL(expected, result);
}

CTEST(Roots_1, input_0_4_2)
{
    float expected = -2;
    float x1;
    float result = Roots(0, 2, 4, 3, 16, &x1);
    ASSERT_EQUAL(expected, result);
}
