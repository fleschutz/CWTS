#include <string>
#include <string_view>

namespace test_suite
{
    extern void use_after_scope_2();

    void use_after_scope_2()
    {
        std::string_view v;
        {
            std::string s = "hi";
            v = s;      // warning: object whose reference is captured does not live long enough
        }               // <- destroyed here
        std::cout << v; // note: later used here
    }
   
} // end of namespace 
