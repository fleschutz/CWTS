The Compiler Warnings Test Suite (CWTS) for C++
===============================================

**Warnings are important, especially in C++. To prevent software bugs developers do require an early warning system. However, not every C++ compiler or code analyzer detects and prints each and every possible warning. CWTS provides a collection of 64 test cases to check this. See the subfolder [Tests/](Tests/) where each test case is handled by a single .cpp source code file, which should generate at least one warning or error.**


Requirements & Installation
---------------------------
Just a **C++ compiler** and **cmake** is needed. Then execute:

```
$ git clone https://github.com/fleschutz/CWTS
$ cd CWTS
$ cmake .
$ make -k
```
and enjoy the flood of compiler warnings 😀


The Ranking by Compiler Warnings 🏆
------------------------------------
The more warnings the better! Each test case compiled without any warning or error counts as a miss. And the winner is:

1. **clang-tidy 10.0:** 8 warnings missing
2. **Clang 10.0.0:** 11 warnings missing
3. **GCC 9.3.0:** 14 warnings missing
4. **Visual Studio 2019:** 17 warnings missing
5. **Visual Studio 2017:** 19 warnings missing
6. **cppcheck 2.3:** 26 warnings missing

For details see the subfolder [Results/](Results/). Please note the results are based on the highest warning level enabled. 


Enabling the Highest Warning Level 🔧
--------------------------------------
By default, every compiler and code analyzer sets the warning level to "normal" - whatever this means. And each one supports different options to be more pedantic:

* **Clang**: `-Weverything -pedantic`
* **clang-tidy:** `-checks=*,-modernize*` (hints how to modernize the code are switched off)
* **cppcheck**: `--enable=all`
* **GCC**: `-Wall -Wextra -pedantic -Wundef`
* **Visual Studio**: `/Wall`

> **NOTE:** GCC and warnings sucks: -Wall and -Wextra do not enable all warnings! To keep backwards compatibility, -Wall is basically, "All warnings as of 1990." -Wextra covers a lot of the newer warnings, but still misses a few.

Zero Warnings Policy 👮‍
------------------------
This means the source code is compiled with a high warning level and no compiler warning is acceptable.

If you are just starting to introduce the Zero Warnings Policy in your project you may get hundreds or even thousands of warnings if you switch on all warnings. To get started you may want to start with a lower warning level. Fix the most severe warnings first and gradually dial up the warning level.

To enforce the Zero Warnings Policy turn warnings into errors. That way warnings can not be ignored because the build fails. This can be turned on for all warnings at once. The corresponding compiler options are `-Werror` for Clang and GCC and `/WX` for Visual Studio.

Dear OS/framework/API/lib developers: introducing the Zero Warnings Policy heavily depends on the header files beeing used. Please make sure your header files can be used without getting any compiler warnings!

Links
-----
* [Diagnostic flags in Clang](https://clang.llvm.org/docs/DiagnosticsReference.html)
* [GCC Warning Options](https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html)
* [Visual Studio Compiler Warnings](https://docs.microsoft.com/en-us/cpp/error-messages/compiler-warnings/compiler-warnings-by-compiler-version)
* [Intel C++ Compilers](https://software.intel.com/en-us/c-compilers)
* [More interesting projects](http://www.fleschutz.de/Service.html)

Feedback
---------
Send your email feedback to: markus [at] fleschutz [dot] de

License & Copyright
-------------------
This open source release is licensed under the CC0 license. All trademarks are the property of their respective owners.
