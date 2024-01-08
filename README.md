The C++ Warnings Test Suite (CWTS)
==================================

**C++ compiler warnings are extremely helpful to prevent software bugs from the beginning on. Sadly, most warnings are either undetected or not shown by the current warning level. This repo checks the warning coverage of your C++ compiler with 68 test cases (each .cpp file in the 📂[tests](tests/) subfolder is a test case).**


⚙️ Installation 
----------------
Requires **cmake** and a **C++ compiler**. Then execute in a terminal window:

```
> git clone https://github.com/fleschutz/CWTS  # or download and unzip the ZIP file (click the green button)
> cd CWTS
> cmake .
> make -k
```
It returns a lot of compiler warnings - the more warnings the better! Edit `CMakeLists.txt` before to force using a certain C++ compiler.


🏆 Compiler Ranking by Warnings
--------------------------------
Each test case (or .cpp file) compiled without warnings or errors is a miss. And the winner is:

1. **clang-tidy 10.0** which misses 8 warnings only.
2. **Clang 10.0.0** which misses 11 warnings.
3. **GCC 9.3.0** which misses 14 warnings.
4. **Visual Studio 2019** which misses 17 warnings.
5. **Visual Studio 2017** which misses 19 warnings.
6. **Cppcheck 2.11** which misses 23 warnings.

See the 📂[results](results/) subfolder for details and older versions. **Note:** all results with highest warning level enabled (see below). 


⚠️ How to enable the Highest Warning Level 
-------------------------------------------
Please note every compiler sets the default warning level to 'normal', whatever this means. And each one supports different options to be more pedantic:

| Compiler        | Options                     | Comment                                           |
|-----------------|-----------------------------------|---------------------------------------------------|
| *Clang*         | `-Weverything -pedantic`          |                                                   |
| *clang-tidy*    | `-checks=*,-modernize*`           | hints how to modernize the code are switched off  |
| *Cppcheck*      | `--enable=all`                    |                                                   |
| *GCC*           | `-Wall -Wextra -pedantic -Wundef` | -Wall and -Wextra do not enable all warnings! To keep backwards compatibility, -Wall is basically, "All warnings as of 1990." -Wextra covers a lot of the newer warnings, but still misses a few. |
| *Visual Studio* | `/Wall`                           |                                                   |


👮‍ Zero Warnings Policy 
------------------------
This means your project is compiled with the **highest** warning level and **zero** compiler warnings are acceptable.

Introducing the *Zero Warnings Policy* by enabling the highest warning level often results in hundreds or even thousands of warnings. To get started you may want to begin with a lower warning level first. Now, fix those warnings and gradually dial up the warning level.

As soon as there are no more warnings **turn warnings into errors** to enforce the *Zero Warnings Policy* from now on. That way warnings can no longer be ignored because the build fails. The corresponding compiler options are `-Werror` for Clang and GCC and `/WX` for Visual Studio.

Dear API developers: introducing the *Zero Warnings Policy* heavily depends on the header files being used. Please make sure your header files do not produce any compiler warnings!

Links
-----
* [Diagnostic flags in Clang](https://clang.llvm.org/docs/DiagnosticsReference.html)
* [GCC Warning Options](https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html)
* [Visual Studio Compiler Warnings](https://docs.microsoft.com/en-us/cpp/error-messages/compiler-warnings/compiler-warnings-by-compiler-version)
* [Intel C++ Compilers](https://software.intel.com/en-us/c-compilers)

📧 Feedback
------------
Send your email feedback to: markus.fleschutz [at] gmail.com

🤝 License & Copyright
-----------------------
This open source project is licensed under the CC0 license. All trademarks are the property of their respective owners.
