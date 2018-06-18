The Compiler Warnings Test Suite (CWTS)
=======================================

**Developers love good compiler warnings to avoid bad code. But how good is your C++ compiler and your compiler settings about warnings? CWTS version 1.0 provides 33 test cases for C++ to check this. Each test case is handled by one source code file (see subfolder `Tests`), which should produce at least one warning or error.**

Requirements
------------
A C++ compiler and cmake. 

Installation 
-------------

1. Download the .zip file or clone the repository with `git clone https://github.com/fleschutz/CWTS.git`
2. Enter the CWTS folder, edit `CMakeLists.txt` and adapt your compiler (1) and your compiler warning options (2).
3. Execute `cmake .; make -k` and enjoy compiler warnings/errors: the more the better! 

How to enable the highest warning level?
----------------------------------------

* GCC 7: `-Wall -Wextra -pedantic -Wundef`
> **NOTE:** GCC and warnings sucks: -Wall and -Wextra do not enable all warnings! To keep backwards compatibility, -Wall is basically, "All warnings as of 1990." -Wextra covers a lot of the newer warnings, but still misses a few.

* Clang: `-Weverything -pedantic`

* MSVC: ?

C++ Compiler Ranking 
--------------------
Only one rule applies: each file compiled without any warning or error results in one penalty point. Results are based on CWTS 1.0 and highest warning level.

1. **clang++ 6.0.0**: 3 penalty points
2. **g++ 7.3.0**: 6 penalty points
3. **MSVC**: ?

The Zero Warnings Policy (ZWP)
------------------------------
This means that the source code is compiled with a high warning level and no compiler warning is acceptable.

If you are just starting to introduce the ZWP in your project you may get hundreds or even thousands of warnings if you switch on all warnings. To get started you may want to start with a lower warning level. Fix the most severe warnings first and gradually dial up the warning level.

To enforce the ZWP turn warnings into errors. That way warnings can not be ignored because the build fails. This can be turned on for all warnings at once. The corresponding compiler options are `-Werror` for Clang and GCC and `/WX` for MSVC.

Dear OS/framework/library developers: introducing the ZWP depends on the underlying operating system, framework and libraries beeing used. Please make sure your header files can be used without getting any compiler warnings!

Links
-----
* [fuckingclangwarnings.com](http://fuckingclangwarnings.com)
* [GCC Warning Options](https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html)

Feedback
---------
Your test case or your C++ compiler is missing? Any feedback is appreciated at markus (at) fleschutz (dot) de

License and Copyright
---------------------
This open source release is licensed under the MIT license. All trademarks are the property of their respective owners.
