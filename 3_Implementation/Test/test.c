#include<stdio.h>
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
#include "../INC/electricals.h"
void setUp(){}
void tearDown(){}

void check(void)
{
    TEST_ASSERT_EQUAL_INT(50,synfrequency(2,0.04));
}

void check2(void)
{
   TEST_ASSERT_EQUAL_INT(1500,synspeed(50,4));
}

void check3(void)
{
   TEST_ASSERT_EQUAL_FLOAT(171.84,powerdeveloped(179,0.04));
   
}

void check4(void)
{
   TEST_ASSERT_EQUAL_FLOAT(151.84, outputpower(171.84,20));
   
}

void check5(void)
{ TEST_ASSERT_EQUAL_FLOAT(1.007431,shafttorque(151.84,1440));
   
}


void check6(void)
{
  TEST_ASSERT_EQUAL_FLOAT(60.59,efficiency(250.6,151.84));
   
}

void check7(void)
{
   TEST_ASSERT_EQUAL_FLOAT(98.76,totallosses(250.6,151.84));
   
}

void check8(void)
{
  TEST_ASSERT_EQUAL_FLOAT(206.84,rotorpower(171.84,35));
   
}

void check9(void)
{
  TEST_ASSERT_EQUAL_FLOAT(192.92,torqueforward(206.84,179));

}

void check10(void)
{
   TEST_ASSERT_EQUAL_FLOAT(13.92,torquebackward(206.84,179));
   
}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(check);
    RUN_TEST(check2);
   RUN_TEST(check3);
    RUN_TEST(check4);
    RUN_TEST(check5);
    RUN_TEST(check6);
    RUN_TEST(check7);
    RUN_TEST(check8);
    RUN_TEST(check9);
    RUN_TEST(check10);
    return UNITY_END();

}
