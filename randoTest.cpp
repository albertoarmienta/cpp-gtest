/**
 * Unit Tests for Rando Test
**/

#include <gtest/gtest.h>
#include "rando.h"

/*  
	FUNCTIONS WE NEED TO TEST:

	bool shouldWorry(bool,bool,bool);
	bool isDivisbleBy(int,int);
	bool isPrime(int);
	int nearestToZero(int,int);
*/
 
class RandoTest : public ::testing::Test
{
	protected:
		RandoTest(){} //constructor runs before each test
		virtual ~RandoTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(RandoTest, allChildrenSmile)
{
	Rando rando;
	ASSERT_TRUE(rando.shouldWorry(true, true, true));
  /*
  ASSERT_TRUE(rando.shouldWorry(true, false, false));
  ASSERT_TRUE(rando.shouldWorry(false, true, false));
  ASSERT_TRUE(rando.shouldWorry(false, false, true));
  ASSERT_FALSE(rando.shouldWorry(false, false, false));
  ASSERT_FALSE(rando.shouldWorry(true, true, false));
  ASSERT_FALSE(rando.shouldWorry(true, false, true));
  ASSERT_FALSE(rando.shouldWorry(false, true, true));
  */
}

TEST(RandoTest, oneChildSmiles1)
{
	Rando rando;
  ASSERT_TRUE(rando.shouldWorry(true, false, false));
}

TEST(RandoTest, oneChildSmiles2)
{
	Rando rando;
  ASSERT_TRUE(rando.shouldWorry(false, true, false));
}

TEST(RandoTest, oneChildSmiles3)
{
	Rando rando;
  ASSERT_TRUE(rando.shouldWorry(false, false, true));
}

TEST(RandoTest, twoSmile1)
{
  Rando rando;
  ASSERT_FALSE(rando.shouldWorry(true, true, false));
}

TEST(RandoTest, twoSmile2)
{
  Rando rando; 
  ASSERT_FALSE(rando.shouldWorry(true, false, true));
}
TEST(RandoTest, twoSmile3)
{
  Rando rando;
  ASSERT_FALSE(rando.shouldWorry(false, true, true));
}

/* DIVISIBLE BY TESTS */
TEST(RandoTest, firstIsZero)
{
  Rando rando;
  ASSERT_FALSE(rando.isDivisibleBy(0, 5));
}

TEST(RandoTest, secondIsZero)
{
  Rando rando;
  ASSERT_FALSE(rando.isDivisibleBy(5, 0));
}

