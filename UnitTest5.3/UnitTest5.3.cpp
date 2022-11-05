#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_3/Lab_05_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double u;
			u = s(2);
			Assert::AreEqual(u, 0.158772, 0.001);

		}
	};
}
