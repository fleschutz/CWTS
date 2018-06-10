The Compiler Warnings Test Suite (CWTS)
=======================================

Programmers love good compiler warnings to avoid bad code. But how good is your C++ compiler and your settings about warnings?

The Compiler Warnings Test Suite (CWTS) contains C++ test cases (see folder Tests/). For each test case there is one source code, and it should produce exactly one warning.

The current CWTS version 1.0 of June 10, 2018 contains 23 test cases.

Requirements
------------
A C++ compiler and cmake. That's it.

Installation 
-------------

1. Download the .zip file or clone the repository with:
   `git clone https://github.com/fleschutz/CWTS.git`
2. Enter the CWTS folder, edit CMakeLists.txt and adapt your compiler (1) and your compiler warning settings (2).
3. Execute `cmake .; make -k` and enjoy compiler warnings/errors: the more the better! 

How to enable the highest warning level?
----------------------------------------

* GCC 7: `-Wall -Wextra -pedantic -Wundef`
  ```
  NOTE: -Wall and -Wextra do not enable all warnings! To keep backwards compatibility, -Wall is basically, "All warnings as of 1990." -Wextra covers a lot of the newer warnings, but still misses a few.
  ```
* Clang: `-Weverything -pedantic`
* MSVC: ?

C++ Compiler Ranking 
--------------------

Only one rule applies: each file compiled without warning/error results in one penalty point. Results are based on CWTS 1.0 and highest warning level.

1. clang++ 6.0.0: 2 penalty points
2. g++ 7.3.0: 5 penalty points
3. MSVC: ?

