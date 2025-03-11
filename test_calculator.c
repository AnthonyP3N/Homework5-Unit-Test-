#include "unity.h"
#include "calculator.h"

//Runs code before tests
void setUp(void){

}

//Runs code after tests
void tearDown(void){

}

void test_add_pos_numbers(void){
    TEST_ASSERT_EQUAL(5, add(2,3));
}

int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_add_pos_numbers);//Run add test function
    return UNITY_END();
}