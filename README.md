The Compiler Warnings Test Suite (CWTS)
=======================================

**Developers love good compiler warnings to avoid bad code - it's like an early warning system to prevent mistakes. However, not every C++ compiler detects and prints each and every possible warning. CWTS version 1.0 provides **54 test cases** to check this. Each test case is handled by one source code file (see subfolder `Tests/`), which should produce at least one warning or error.**

Requirements
------------
Just a C++ compiler and cmake. 

Installation 
-------------
1. Make sure your C++ compiler and cmake is installed.
2. Download the .zip file or clone the repository with `git clone https://github.com/fleschutz/CWTS`
3. Enter the CWTS folder, edit `CMakeLists.txt` and adapt your compiler (1) and your compiler warning options (2).
4. Execute `cmake .; make -k` and enjoy compiler warnings/errors: the more the better! 

How to enable the highest warning level for my compiler?
--------------------------------------------------------
* GCC 7: `-Wall -Wextra -pedantic -Wundef`
> **NOTE:** GCC and warnings sucks: -Wall and -Wextra do not enable all warnings! To keep backwards compatibility, -Wall is basically, "All warnings as of 1990." -Wextra covers a lot of the newer warnings, but still misses a few.

* Clang: `-Weverything -pedantic`
* MSVC: TBD
* Intel C++: TBD

Compiler Warnings Ranking 
-------------------------
Gentleman, there is just one rule for ranking: each test file compiled without any warning or error results in one penalty point. The following results are based on CWTS 1.0 and highest warning level enabled.

1. **Clang 6.0.0**: 9 penalty points
2. **GCC 7.3.0**: 12 penalty points
3. **MSVC**: TBD
4. **Intel C++**: TBD

The Zero Warnings Policy
------------------------
This means that the source code is compiled with a high warning level and no compiler warning is acceptable.

If you are just starting to introduce the Zero Warnings Policy in your project you may get hundreds or even thousands of warnings if you switch on all warnings. To get started you may want to start with a lower warning level. Fix the most severe warnings first and gradually dial up the warning level.

To enforce the Zero Warnings Policy turn warnings into errors. That way warnings can not be ignored because the build fails. This can be turned on for all warnings at once. The corresponding compiler options are `-Werror` for Clang and GCC and `/WX` for MSVC.

Dear OS/framework/library developers: introducing the Zero Warnings Policy heavily depends on the operating system, framework and libraries beeing used. Please make sure your header files can be used without getting any compiler warnings!

Links
-----
* [Diagnostic flags in Clang](https://clang.llvm.org/docs/DiagnosticsReference.html)
* [fuckingclangwarnings.com](http://fuckingclangwarnings.com)
* [GCC Warning Options](https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html)
* [MSVC Compiler Warnings](https://docs.microsoft.com/en-us/cpp/error-messages/compiler-warnings/compiler-warnings-by-compiler-version)
* [Intel C++ Compilers](https://software.intel.com/en-us/c-compilers)
* [More interesting projects](http://www.fleschutz.de/Service)

Feedback
---------
A test case or a C++ compiler is missing? Send your feedback to markus at fleschutz dot de.

License & Copyright
-------------------
This open source release is licensed under the MIT license. All trademarks are the property of their respective owners.
