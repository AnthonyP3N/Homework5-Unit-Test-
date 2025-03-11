#include "unity.h"
#include "calculator.h"

//Runs code before tests
void setUp(void){

}

//Runs code after tests
void tearDown(void){

}

//Test function for adding positive numbers
void test_add_pos_numbers(void){
    TEST_ASSERT_EQUAL(5, add(2,3));//Expect 2+3 to equal 5
}

//Test function for adding positive and negative numbers
void test_add_pos_and_neg_numbers(void){
    TEST_ASSERT_EQUAL(1, add(5,-4));//Expect 5 + -4 to equal 1
}

//Test function for adding negative numbers.
void test_add_neg_numbers(void){
    TEST_ASSERT_EQUAL(-7, add(-3, -4));//Expect -3 + -4 to equal -7
}

//Test function to add zero 
void test_add_zero(void){
    TEST_ASSERT_EQUAL(10, add(10,0));//Expect 10 + 0 to equal 10
    TEST_ASSERT_EQUAL(0, add(0,0));//Expect 0 + 0 to equal 0
}

int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_add_pos_numbers);//Run add test function for positive numbers
    RUN_TEST(test_add_pos_and_neg_numbers);//Run add test function for positive and negative numbers
    RUN_TEST(test_add_neg_numbers);//Run add test function for negative numbers
    RUN_TEST(test_add_zero);//Run add test for zero
    return UNITY_END();
}