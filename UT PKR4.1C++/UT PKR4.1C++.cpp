#include "pch.h"
#include "CppUnitTest.h"
#include "../PKR 4.1 C++/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTPKR41C
{
	TEST_CLASS(UTPKR41C)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string ss = "awful";
			bool res = Include("t", ss);
			Assert::AreEqual(false, Include("t", ss));

		}
	};
}
