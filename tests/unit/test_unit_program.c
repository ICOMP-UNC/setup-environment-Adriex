#include "unity.h"
#include "adder.h"

void test_sumar(void) {
    TEST_ASSERT_EQUAL(8, sumar(5, 3));
    TEST_ASSERT_EQUAL(10, sumar(7, 3));
    TEST_ASSERT_NOT_EQUAL(10, sumar(5, 3));
    TEST_ASSERT_NOT_EQUAL(4, sumar(5, 3));
}

void test_restar(void) {
    TEST_ASSERT_EQUAL(2, restar(5, 3));
    TEST_ASSERT_EQUAL(4, restar(7, 3));
}

void test_multiplicar(void) {
    TEST_ASSERT_EQUAL(15, multiplicar(5, 3));
    TEST_ASSERT_EQUAL(21, multiplicar(7, 3));
}

void test_dividir(void) {
    TEST_ASSERT_EQUAL(2, dividir(6, 3));
    TEST_ASSERT_EQUAL(3, dividir(9, 3));
    TEST_ASSERT_NOT_EQUAL(3, dividir(6, 3));
    TEST_ASSERT_NOT_EQUAL(2, dividir(9, 3));
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
    RUN_TEST(test_restar);
    RUN_TEST(test_multiplicar);
    RUN_TEST(test_dividir);
    return UNITY_END();
}