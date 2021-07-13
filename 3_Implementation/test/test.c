#include "fun.h"
#include "unity_internals.h"
#include "unity.h"

void setUp() {}

void tearDown() {}
//Function to test

void test_bike(void)
{

    TEST_ASSERT(0);
}
void test_car(void)
{

    TEST_ASSERT(0);
}

void test_clear(void)
{

    TEST_ASSERT(0);
}

void test_menu(void)
{

    TEST_ASSERT(0);
}

void test_rikshaw(void)
{

    TEST_ASSERT(0);
}

void test_status(void)
{

    TEST_ASSERT(0);
}

void test_truck(void)
{

    TEST_ASSERT(0);
}

int main()
{
    UNITY_BEGIN();

    RUN_TEST(test_bike);
    RUN_TEST(test_car);
    RUN_TEST(test_clear);
    RUN_TEST(test_menu);
    RUN_TEST(test_rikshaw);
    RUN_TEST(test_status);
    RUN_TEST(test_truck);

    return UNITY_END();
}