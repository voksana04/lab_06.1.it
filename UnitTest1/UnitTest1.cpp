#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\admin\source\repos\Project_6.1_it\Project_6.1_it\lab_6.1_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestProcessArray)
        {
            const int n = 5;
            int arr[n] = { 6, -10, 18, 5, 30 }; 
            int expected_count = 3; 
            int expected_sum = 53;   
            int count = 0, sum = 0;

            processArray(arr, n, count, sum);

            Assert::AreEqual(expected_count, count); 
            Assert::AreEqual(expected_sum, sum);     
        }

        TEST_METHOD(TestReplaceElements)
        {
            const int n = 5;
            int arr[n] = { 6, 10, -18, 5, 30 }; 
            int expected_result[n] = { 6, 0, -18, 0, 0 }; 

            replaceElements(arr, n);

            for (int i = 0; i < n; i++) {
                Assert::AreEqual(expected_result[i], arr[i]); 
            }
        }

        TEST_METHOD(TestGenerateArray) {
            const int n = 20;
            int arr[n];
            generateArray(arr, n);

            for (int i = 0; i < n; i++) {
                Assert::IsTrue(arr[i] >= MIN_VALUE && arr[i] <= MAX_VALUE);
            }
        }
    };
}