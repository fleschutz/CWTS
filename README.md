The Compiler Warnings Test Suite (CWTS) for C++
===============================================

**Warnings are important, especially in C++. Developers do require an early warning system to prevent mistakes. However, not every C++ compiler detects and prints each and every possible warning. CWTS contains a collection of *57 test cases* to check this. See the subfolder `Tests/` where each test case is handled by a single .cpp source code file, which should produce at least one warning or error.**

Requirements
------------
Just a C++ compiler and cmake.

Installation 
-------------
1. Make sure the C++ compiler and cmake is installed.
2. Download the .zip file or clone the repository with `git clone https://github.com/fleschutz/CWTS`
3. Execute `cd CWTS; cmake .; make -k` and enjoy a lot of compiler warnings 😀

Ranking of Compiler Warnings 🏆
-------------------------------
The more warnings the better: each test case compiled without any warning or error counts as a miss. The following results are based on the highest warning level enabled.

1. **Clang** 10.0.0 with 12 warnings missing
2. **GCC** 9.3.0 with 14 warnings missing
3. **Visual Studio**: TBD
4. **Intel C++**: TBD

See the subfolder `CompilerOutput/` for details.

How to Enable the Highest Compiler Warning Level 🔧
---------------------------------------------------
Each compiler sets the warning level to "normal" by default (whatever this is). And each compiler supports different options to be more pedantic:

* **Clang**: `-Weverything -pedantic`
* **GCC**: `-Wall -Wextra -pedantic -Wundef`
> **NOTE:** GCC and warnings sucks: -Wall and -Wextra do not enable all warnings! To keep backwards compatibility, -Wall is basically, "All warnings as of 1990." -Wextra covers a lot of the newer warnings, but still misses a few.
* **Intel C++**: TBD
* **Visual Studio**: `/Wall`

Zero Warnings Policy 👮‍
------------------------
This means that the source code is compiled with a high warning level and no compiler warning is acceptable.

If you are just starting to introduce the Zero Warnings Policy in your project you may get hundreds or even thousands of warnings if you switch on all warnings. To get started you may want to start with a lower warning level. Fix the most severe warnings first and gradually dial up the warning level.

To enforce the Zero Warnings Policy turn warnings into errors. That way warnings can not be ignored because the build fails. This can be turned on for all warnings at once. The corresponding compiler options are `-Werror` for Clang and GCC and `/WX` for MSVC.

Dear OS/framework/library developers: introducing the Zero Warnings Policy heavily depends on the operating system, framework and libraries beeing used. Please make sure your header files can be used without getting any compiler warnings!

Links
-----
* [Diagnostic flags in Clang](https://clang.llvm.org/docs/DiagnosticsReference.html)
* [GCC Warning Options](https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html)
* [MSVC Compiler Warnings](https://docs.microsoft.com/en-us/cpp/error-messages/compiler-warnings/compiler-warnings-by-compiler-version)
* [Intel C++ Compilers](https://software.intel.com/en-us/c-compilers)
* [More interesting projects](http://www.fleschutz.de/Service.html)

Feedback
---------
A test case or a C++ compiler is missing? Send your feedback to markus at fleschutz dot de.

License & Copyright
-------------------
This open source release is licensed under the CC0 license. All trademarks are the property of their respective owners.
