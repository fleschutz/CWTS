#include <stdio.h>

namespace test_suite
{
    extern void use_after_scope_1();

    void use_after_scope_1()
    {
        int *ptr = NULL;
        {
            int i = 5;
            ptr = &i;  // warning: local variable 'i' does not live long enough
        }              // <- local variable 'i' is destroyed here
        *ptr = 6;      // note: later used here
    }
   
} // end of namespace 
