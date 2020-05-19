#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "Faults.h"

void test_UnderFrequency(void)
{
    CU_ASSERT(UnderFrequency(340.0,20) == 1);
    CU_ASSERT(UnderFrequency(350.0,20) == 0);
    CU_ASSERT(UnderFrequency(340.0,19) == 0);
}


int main()
{
    CU_initialize_registry();
	
	CU_pSuite suite = CU_add_suite("test_UnderFrequency", 0, 0);

    CU_add_test(suite, "test_UnderFrequency", test_UnderFrequency);

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return 0;
}
