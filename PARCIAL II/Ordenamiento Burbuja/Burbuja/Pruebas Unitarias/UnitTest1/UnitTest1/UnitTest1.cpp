#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			void ordenamientoBurbuja(int *vec, int tam) {
				int aux;
				for (int i = 0; i < tam; i++) {
					for (int j = 0; j < tam - 1; j++) {
						if (*(vec + j) > *(vec + j + 1)) {
							aux = *(vec + j);
							*(vec + j) = *(vec + j + 1);
							*(vec + j + 1) = aux;
						}
					}
				}
			}
		}
	};
}
