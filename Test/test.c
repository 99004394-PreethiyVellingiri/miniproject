#include<stdio.h>
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
#include "../electricals.h"
void setUp(){}
void tearDown(){}

void check(void)
{
    TEST_ASSERT_EQUAL_FLOAT(60.59,efficiency(250.6,151.84));
}

void check2(void)
{
   TEST_ASSERT_EQUAL_FLOAT(1500,synspeed(50,4));
}

void check3(void)
{
   TEST_ASSERT_EQUAL_FLOAT(171.84,powerdeveloped(179,0.04));
   //TEST_ASSERT_EQUAL_FLOAT(112.80,powerdeveloped(120,0.06));
}

void check4(void)
{
   TEST_ASSERT_EQUAL_FLOAT(151.84, outputpower(171.84,20));
   //TEST_ASSERT_EQUAL_FLOAT(102.80, outputpower(112.80,10));
}

void check5(void)
{ TEST_ASSERT_EQUAL_FLOAT(1.007431,shafttorque(151.84,1440));
   //TEST_ASSERT_EQUAL_FLOAT(0.83,shafttorque(102.80,960));
}


void check6(void)
{
  TEST_ASSERT_EQUAL(60.59,efficiency(250.6,151.84));
   //TEST_ASSERT_EQUAL(34.20,efficiency(300.6,102.80));
}

void check7(void)
{
   TEST_ASSERT_EQUAL(98.76,totallosses(250.6,151.84));
   //TEST_ASSERT_EQUAL(197.180,totallosses(300.6,102.80));
}

void check8(void)
{
   TEST_ASSERT_EQUAL(206,rotorpower(171.84,35));
   //TEST_ASSERT_EQUAL(232.80,rotorpower(112.80,20));
}

void check9(void)
{
  TEST_ASSERT_EQUAL(192.25,torqueforward(206,179));
   //TEST_ASSERT_EQUAL(176.40,torqueforward(232.80,120));
}

void check10(void)
{
   TEST_ASSERT_EQUAL(13.5,torquebackward(206,179));
   //TEST_ASSERT_EQUAL(56.40,torquebackward(232.80,120));
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
