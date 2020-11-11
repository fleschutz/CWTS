The Compiler Warnings Test Suite (CWTS) for C++
===============================================

**Warnings are important, especially in C++. Developers do require an early warning system to prevent mistakes. However, not every C++ compiler detects and prints each and every possible warning. CWTS contains a collection of 57 test cases to check this. See the subfolder `Tests/` where each test case is handled by a single .cpp source code file, which should produce at least one warning or error.**

Requirements
------------
Just a **C++ compiler** and **cmake**.

Installation 
-------------
```
$ git clone https://github.com/fleschutz/CWTS
$ cd CWTS
$ cmake .
$ make -k
```
and enjoy a lot of compiler warnings 😀

Ranking of Compiler Warnings 🏆
-------------------------------
The more warnings the better: each test case compiled without any warning or error counts as a miss. The following results are based on the highest warning level enabled.

1. **Clang** 10.0.0 misses 11 warnings 
2. **GCC** 9.3.0 misses 14 warnings
3. **Visual Studio** 2017 misses 19 warnings 

For details see the [subfolder Results/](Results/).

How to Enable the Highest Warning Level 🔧
------------------------------------------
Each compiler sets the warning level to "normal" by default - whatever this means. And each compiler supports different options to be more pedantic:

* **Clang**: `-Weverything -pedantic`
* **GCC**: `-Wall -Wextra -pedantic -Wundef`
> **NOTE:** GCC and warnings sucks: -Wall and -Wextra do not enable all warnings! To keep backwards compatibility, -Wall is basically, "All warnings as of 1990." -Wextra covers a lot of the newer warnings, but still misses a few.
* **Visual Studio**: `/Wall`

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
