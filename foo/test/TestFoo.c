#include "../src/foo.h"
#include "unity.h"
#include "unity_fixture.h"
#include <stdio.h>
#include <stdlib.h>


int vet[] = {3 ,6 ,2 ,4, 5, 32, 1, 10 , 20};

TEST_GROUP(Foo);

TEST_SETUP(Foo)
{
}

TEST_TEAR_DOWN(Foo)
{
}

TEST(Foo, TestFoo1)
{
  // All of these should pass
 
	
  TEST_ASSERT_EQUAL(6, foo(vet,9,3));
  TEST_ASSERT_EQUAL(3, foo(vet,9,6));
  
}

TEST(Foo, TestFoo2)
{
  // This test will fail
  
}
