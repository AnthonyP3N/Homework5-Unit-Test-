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
    TEST_ASSERT_EQUAL(1, add(1,0));//Corret fail case, should be 1 now
}

//Test function for add overflow 
void test_add_overflow(void){
    int result = add(INT_MAX, 1);//Wrap around or cause undefined 
    TEST_ASSERT_TRUE(result<0);//Checks if overflow occured
}

//Test function for add underflow
void test_add_underflow(void){
    int result = add(INT_MIN,-1);
    TEST_ASSERT_TRUE(result>0);//Checks if underflow occured
}


int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_add_pos_numbers);//Run add test function for positive numbers
    RUN_TEST(test_add_pos_and_neg_numbers);//Run add test function for positive and negative numbers
    RUN_TEST(test_add_neg_numbers);//Run add test function for negative numbers
    RUN_TEST(test_add_zero);//Run add test for zero
    RUN_TEST(test_add_overflow);//Run add test for overflow
    RUN_TEST(test_add_underflow);//Run add test for underflow
    return UNITY_END();
}