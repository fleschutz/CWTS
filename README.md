The C++ Warnings Test Suite (CWTS)
==================================

**Compiler warnings are important, especially in C++. They are extremely helpful to prevent software bugs from the beginning. Problem is C++ compilers and code analyzers detect some BUT not every possible warning! To check the coverage of a given compiler/analyzer this repo provides a collection of 68 test cases (in the 📂[tests](tests/) subfolder with a .cpp source code file for each test case).**


🔧 Requirements & Installation 
-------------------------------
Requires **cmake** and a **C++ compiler**. Then execute in a terminal window:

```
> git clone https://github.com/fleschutz/CWTS  # or download and unzip the ZIP file (click the green button)
> cd CWTS
> cmake .
> make -k
```
Now, expect a ton of compiler warnings - the more warnings the better! Edit `CMakeLists.txt` before if you want to force using a certain C++ compiler.


🏆 Ranking by Compiler Warnings
--------------------------------
There's one rule only: each .cpp file (a test case) compiled without any warning or error counts as a miss. And the winner is:

1. **clang-tidy 10.0** which misses 8 warnings
2. **Clang 10.0.0** which misses 11 warnings
3. **GCC 9.3.0** which misses 14 warnings
4. **Visual Studio 2019** which misses 17 warnings
5. **Visual Studio 2017** which misses 19 warnings
6. **Cppcheck 2.3** which misses 26 warnings

See the 📂[results](results/) subfolder for details. **Note:** all results with highest warning level enabled (see below). 


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
It means the project's source code is compiled with the **highest warning level** and **no compiler warning is acceptable**.

Introducing the *Zero Warnings Policy* by enabling the highest warning level often results in hundreds or even thousands of warnings. To get started you may want to begin with a lower warning level first. Now, fix those warnings and gradually dial up the warning level.

As soon as there are no more warnings **turn warnings into errors** to enforce the *Zero Warnings Policy* from now on. That way warnings can no longer be ignored because the build fails. The corresponding compiler options are `-Werror` for Clang and GCC and `/WX` for Visual Studio.

Dear OS/framework/API/lib developers: introducing the *Zero Warnings Policy* heavily depends on the header files beeing used. Please make sure your header files do not produce any compiler warnings!

Links
-----
* [Diagnostic flags in Clang](https://clang.llvm.org/docs/DiagnosticsReference.html)
* [GCC Warning Options](https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html)
* [Visual Studio Compiler Warnings](https://docs.microsoft.com/en-us/cpp/error-messages/compiler-warnings/compiler-warnings-by-compiler-version)
* [Intel C++ Compilers](https://software.intel.com/en-us/c-compilers)
* [More interesting projects](http://www.fleschutz.de/Service.html)

📧 Feedback
------------
Send your email feedback to: markus.fleschutz [at] gmail.com

🤝 License & Copyright
-----------------------
This open source project is licensed under the CC0 license. All trademarks are the property of their respective owners.
