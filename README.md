The Compiler Warnings Test Suite
================================

How good is your C++ compiler about warnings?

The Compiler Warnings Test Suite (CWTS) contains C++ source code files, and each file should produce one warning only. The current CWTS version 1.0 of June 9, 2018 contains 11 tests.

Installation 
-------------

1. Clone or download the CWTS repository
2. Edit CMakeLists.txt and adapt (1) and (2)
3. Execute "cmake .; make" and enjoy the compiler warnings: the more the better! 

C++ Compiler Ranking for CWTS 1.0
---------------------------------

Only one rule applies: each file compiled without warning results in one penalty point.

1. g++ 7.3.0 and -Wall -Wextra: 2 penalty points
2. clang++ 6.0 and -Wall -Wextra: 2 penalty points
3. MSVC: 

