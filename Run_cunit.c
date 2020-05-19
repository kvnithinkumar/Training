#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "Faults.h"

void test_UnderVoltage(void)
{
    CU_ASSERT(UnderVoltage(4.0,20) == 1);
    CU_ASSERT(UnderVoltage(5.0,20) == 0);
    CU_ASSERT(UnderVoltage(4.0,19) == 0);
}
void test_UnderFrequency(void)
{
    CU_ASSERT(UnderFrequency(340.0,20) == 1);
    CU_ASSERT(UnderFrequency(350.0,20) == 0);
    CU_ASSERT(UnderFrequency(340.0,19) == 0);
}
/*
void test_OverCurrent(void)
{
    CU_ASSERT(OverCurrent(11,20) == 1);
    CU_ASSERT(OverCurrent(10,20) == 0);
    CU_ASSERT(OverCurrent(11,19) == 0);
}*/

/*
void test_OverVoltage(void)
{
    CU_ASSERT(OverVoltage(16,20) == 1);
    CU_ASSERT(OverVoltage(10,20) == 0);
    CU_ASSERT(OverVoltage(16,19) == 0);
}*/


int main()
{
    CU_initialize_registry();
    CU_pSuite suite = CU_add_suite("test_UnderVoltage", 0, 0);

    CU_add_test(suite, "test_UnderVoltage", test_UnderVoltage);
	
	CU_pSuite suite2 = CU_add_suite("test_UnderFrequency", 0, 0);

    CU_add_test(suite2, "test_UnderFrequency", test_UnderFrequency);
	
	/*CU_pSuite suite3 = CU_add_suite("test_OverCurrent", 0, 0);

    CU_add_test(suite3, "test_OverCurrent", test_OverCurrent);*/
	
	/*CU_pSuite suite4 = CU_add_suite("test_OverVoltage", 0, 0);

    CU_add_test(suite4, "test_OverVoltage", test_OverVoltage);*/


    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return 0;
}
