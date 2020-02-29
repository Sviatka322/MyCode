#include "pch.h"
#include "CppUnitTest.h"
#include "../ClassStack/ClassStack.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestStack
{
	TEST_CLASS(UnitTestStack)
	{
	public:
		
		TEST_METHOD(TestAddOneElement)
		{
			Stack stack1;

			const int test_element = 4;

			stack1.push(test_element);

			Assert::AreEqual(stack1.pop(), test_element);
		}

		TEST_METHOD(TestAddAnotherTypeElement)
		{
			Stack stack1;

			const double test_element = 3.143;

			stack1.push(test_element);
			
			Assert::AreEqual(stack1.pop(), 3);
		}

		TEST_METHOD(TestAddOneElementInFullStack)
		{
			const int size = 5;

			Stack stack1(size);

			for (int i = 0; i < size; i++)
			{
				stack1.push(i);
			}

			const int test_overflow = 10;

			stack1.push(test_overflow);

			Assert::AreNotEqual(stack1.pop(), test_overflow);
		}

		TEST_METHOD(TestWithdrawalOneElement)
		{
			Stack stack1;

			const int test_withdrawal = 5;

			stack1.push(test_withdrawal);

			Assert::AreEqual(stack1.pop(), test_withdrawal);
		}

		TEST_METHOD(TestWithdrawalOneElementFrowEmptyStack)
		{
			Stack stack1;

			stack1.pop();
		}
	};
}
