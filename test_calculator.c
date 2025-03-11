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

//Test function for subtracting positive numbers
void test_subtract_pos_numbers(void){
    TEST_ASSERT_EQUAL(5, subtract(7,2));//Expect 7 - 2 = 5
}

//Test function for subtracting negative numbers
void test_subtract_neg_numbers(void){
    TEST_ASSERT_EQUAL(-4, subtract(-7,-3));//Expect -7 - (-3) = -4
}

//Test function for subtracting positive and negative numbers
void test_subtract_pos_and_neg_numbers(void){
    TEST_ASSERT_EQUAL(5, subtract(7,2));//fixed 7 - 2 = 5
}

//Test functions for subtracting 0
void test_subtract_zero(void){
    TEST_ASSERT_EQUAL(5, subtract(5,0));//Expect 5 - 0 = 0
    TEST_ASSERT_EQUAL(0, subtract(0,0));//Expect 0 - 0 = 0
}

//Test function for subtract overflow 
void test_subtract_overflow(void){
    int result = subtract(1, INT_MAX + 1);//Wrap around or cause undefined 
    TEST_ASSERT_TRUE(result<0);//Checks if overflow occured
}

//Test function for subtract underflow
void test_subtract_underflow(void){
    int result = subtract(INT_MIN,1);
    TEST_ASSERT_TRUE(result>0);//Checks if underflow occured
}

//Test function for multiply positive numbers 
void test_mult_pos_numbers(void){
    TEST_ASSERT_EQUAL(8, multiply(2,4));//Expect 2 * 4 = 8
}

//Test function for multiply negative numbers 
void test_mult_neg_numbers(void){
    TEST_ASSERT_EQUAL(8, multiply(-2,-4));//Fixed failed case, -2 * -4 = 8
}

//Test function for multiply positive and negative numbers 
void test_mult_pos_and_neg_numbers(void){
    TEST_ASSERT_EQUAL(-12,multiply(3,-4));//Expect 3 * -4 = -12
}

//Test function for multiply zero numbers 
void test_mult_zero_numbers(void){
    TEST_ASSERT_EQUAL(0,multiply(3,0));//Expect 3 * 0 = 0
    TEST_ASSERT_EQUAL(0,multiply(5,0));//Expect 5 * 0 = 0
    TEST_ASSERT_EQUAL(0,multiply(-3,0));//Expect -3 * 0 = 0

}

//Test function for multiply overflow numbers 
void test_mult_overflow(void){
    int result = multiply(INT_MAX, 2);
    TEST_ASSERT_TRUE(result<0);//Checks if overflow occured
}

//Test function for multiply underflow numbers 
void test_mult_underflow(void){
    int result = multiply(INT_MIN, -4);
    TEST_ASSERT_TRUE(result>=0);//Checks if overflow occured
}

//Test function for division of positive numbers 
void test_div_pos_numbers(void){
    TEST_ASSERT_EQUAL(2, divide(10,5));//Expect 10 / 5 = 2
    TEST_ASSERT_EQUAL(10, divide(50,5));//Fixed Fail test case, 50 / 5 = 10 
}

//Test function for division of negative numbers 
void test_div_neg_numbers(void){
    TEST_ASSERT_EQUAL(4, divide(-4000, -1000));//Expect -4000 / -1000 = 4
    TEST_ASSERT_EQUAL(3, divide(-12, -4));//Fixed Fail case, -12 / -4 = 3
}

//Test function for division of positive and negative numbers 
void test_div_pos_and_neg_numbers(void){
    TEST_ASSERT_EQUAL(-2, divide(16,-8));//Expect 16 / -8 = -2
    TEST_ASSERT_EQUAL(-4, divide(146336,-36584));//Expect 146336 / 36,584 = -4
}

//Test function for multiply zero numbers 
void test_div_zero_numbers(void){
    TEST_ASSERT_EQUAL(0, divide (0, 3));//Expect 0 / 3 = 0
    TEST_ASSERT_EQUAL(0, divide(0, 10));//Expect 0 / 10 = 0
}

//Test function for multiply overflow numbers 
void test_div_overflow(void){
    int result = divide(1,INT_MAX);
    TEST_ASSERT_TRUE(result<=0);//Checks if overflow occured
}

//Test function for multiply underflow numbers 
void test_div_underflow(void){
    int result = divide(-4, INT_MIN);
    TEST_ASSERT_TRUE(result>=0);//Checks if overflow occured
}

int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_add_pos_numbers);//Run add test function for positive numbers
    RUN_TEST(test_add_pos_and_neg_numbers);//Run add test function for positive and negative numbers
    RUN_TEST(test_add_neg_numbers);//Run add test function for negative numbers
    RUN_TEST(test_add_zero);//Run add test for zero
    RUN_TEST(test_add_overflow);//Run add test for overflow
    RUN_TEST(test_add_underflow);//Run add test for underflow
    RUN_TEST(test_subtract_pos_numbers);//Run sub test for pos numbers
    RUN_TEST(test_subtract_neg_numbers);//Run sub test for neg numbers
    RUN_TEST(test_subtract_pos_and_neg_numbers);//Run sub test for pos and neg numbers
    RUN_TEST(test_subtract_zero);//Run sub test for zero
    RUN_TEST(test_subtract_overflow);//Run sub test for overflow
    RUN_TEST(test_subtract_underflow);//Run sub test for underflow
    RUN_TEST(test_mult_pos_numbers);//Run multiply test case for positive numbers
    RUN_TEST(test_mult_neg_numbers);//Run multiply test case for negative numbers
    RUN_TEST(test_mult_pos_and_neg_numbers);//Run multiply test case for positive and negative numbers
    RUN_TEST(test_mult_zero_numbers);//Run multiply test case for zero
    RUN_TEST(test_mult_overflow);//Run multiply test case for overflow
    RUN_TEST(test_mult_underflow);//Run multiply test case for underflow
    RUN_TEST(test_div_pos_numbers);//Run divison test case for positive numbers
    RUN_TEST(test_div_neg_numbers);//Run divison test case for negative numbers
    RUN_TEST(test_div_pos_and_neg_numbers);//Run divison test case for positive and negative numbers
    RUN_TEST(test_div_zero_numbers);//Run divison test case for zero
    RUN_TEST(test_div_overflow);//Run divison test case for overflow
    RUN_TEST(test_div_underflow);//Run divison test case for underflow
    return UNITY_END();
}