#include "unity.h"
#include "adder.h"

void test_sumar(void) {
    TEST_ASSERT_EQUAL(8, sumar(5, 3));
    TEST_ASSERT_EQUAL(10, sumar(7, 3));
    TEST_ASSERT_NOT_EQUAL(10, sumar(5, 3));
    TEST_ASSERT_NOT_EQUAL(4, sumar(5, 3));
}

void setUp(void) {
    // set stuff up here
    printf("Setting up\n");
}

void tearDown(void) {
    // clean stuff up here
    printf("Tearing down\n");
}

int main() {
    UNITY_BEGIN();
    RUN_TEST(test_sumar);
    
    return UNITY_END();
}