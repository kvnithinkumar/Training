  
#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "Faults.h"

void test_OverV(void){
	CU_Assert(OverV(1,2) == True);
	CU_Assert(OverV(3,1) == False);
}

int main() {
    CU_initialize_registry();
    CU_pSuite suite = CU_add_suite("test_OverV", 0, 0);

    CU_add_test(suite, "test_OverV", test_OverV);

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return 0;
}
