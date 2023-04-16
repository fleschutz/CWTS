The Compiler Warnings Test Suite (CWTS) for C++
===============================================

**Warnings are important, especially in C++. To prevent software bugs developers do require an early warning system. However, not every C++ compiler or code analyzer detects and prints each and every possible warning. This repository provides a collection of 68 test cases to check this. See the [📂Tests](Tests/) subfolder where each test case is handled by a single .cpp source code file, which should generate at least one warning or error.**


🔧 Installation 
----------------
Just a **C++ compiler, git, and cmake** is needed. Then execute in a terminal window:

```
$ git clone https://github.com/fleschutz/CWTS; cd CWTS
$ cmake .
$ make -k
```
and expect a ton of compiler warnings. Edit `CMakeLists.txt` before if you want to force using a certain C++ compiler.


🏆 Ranking by Compiler Warnings
--------------------------------
The more warnings the better! Each test case compiled without any warning or error counts as a miss. And the winner is:

1. **clang-tidy 10.0** which misses 8 warnings
2. **Clang 10.0.0** which misses 11 warnings
3. **GCC 9.3.0** which misses 14 warnings
4. **Visual Studio 2019** which misses 17 warnings
5. **Visual Studio 2017** which misses 19 warnings
6. **Cppcheck 2.3** which misses 26 warnings

See the [📂Results](Results/) subfolder for details. **Note:** all results with highest warning level enabled. 


⚠️ How to enable the Highest Warning Level 
-------------------------------------------
Please note that every compiler sets the default warning level to 'normal' - whatever this means. And each one supports different options to be more pedantic:

| Compiler      | Compiler Options                  | Comment                                           |
|---------------|-----------------------------------|---------------------------------------------------|
| Clang         | `-Weverything -pedantic`          |                                                   |
| clang-tidy    | `-checks=*,-modernize*`           | Hints how to modernize the code are switched off  |
| Cppcheck      | `--enable=all`                    |                                                   |
| GCC           | `-Wall -Wextra -pedantic -Wundef` | -Wall and -Wextra do not enable all warnings! To keep backwards compatibility, -Wall is basically, "All warnings as of 1990." -Wextra covers a lot of the newer warnings, but still misses a few. |
| Visual Studio | `/Wall`                           |                                                   |


👮‍ Zero Warnings Policy 
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
Send your email feedback to: markus.fleschutz [at] gmail.com

License & Copyright
--------------------
This open source project is licensed under the CC0 license. All trademarks are the property of their respective owners.
