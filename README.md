The Compiler Warnings Test Suite (CWTS)
=======================================

Programmers love good compiler warnings to avoid bad code. But how good is your C++ compiler about warnings?

The Compiler Warnings Test Suite (CWTS) contains C++ test cases (see folder Tests/). For each test case there is one source code, and it should produce exactly one warning.

The current CWTS version 1.0 of June 10, 2018 contains 15 test cases.

Installation 
-------------

1. Clone or download the CWTS repository
2. Edit CMakeLists.txt and adapt (1) and (2)
3. Execute "cmake .; make" and enjoy the compiler warnings: the more the better! 

How to enable the highest warning level?
----------------------------------------

* GCC 7: -Wall -Wextra -pedantic
  NOTE: -Wall and -Wextra do not enable all warnings! To keep backwards compatibility, -Wall is basically, "All warnings as of 1990." -Wextra covers a lot of the newer warnings, but still misses a few.
* Clang on Apple: -Weverything -pedantic
* MSVC: ?

C++ Compiler Ranking 
--------------------

Only one rule applies: each file compiled without warning results in one penalty point. Results are based on CWTS 1.0 and highest warning level.

1. g++ 7.3.0: 5 penalty points
2. clang++ 6.0: 5 penalty points
3. MSVC: ?

