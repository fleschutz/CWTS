Compiler Warnings Test Suite (CWTS)
====================================

**C/C++ compiler warnings are really helpful to prevent software bugs from the beginning on. Sadly, most warnings are either undetected or not shown by the default warning level. This repo checks the warning coverage of C++ compilers against 70 test cases. For details see the source code in the 📂[test_cases](test_cases/) subfolder and the results in the 📂[test_results](test_results/) subfolder.**


🔧 Installation 
----------------
Requires a **C++ compiler** and **cmake**, then execute in a terminal window:

```
> git clone https://github.com/fleschutz/CWTS  # or download and unzip the ZIP file (click the green button)
> cd CWTS
> cmake .
> make -k                                      # option '-k': keep going, even on errors
```
Expect a lot of compiler warnings but the more warnings the better! Edit `CMakeLists.txt` before to force using a certain C++ compiler.


🏆 Hall of Fame
---------------
Each test case compiled without a warning or error is a miss. And the winners are:

1. **clang-tidy 10.0** which misses 8 warnings only.
2. **Clang 10.0.0** missing 11 warnings.
3. **GCC 9.3.0** missing 14 warnings.
4. **Visual Studio 2019** missing 17 warnings.
5. **Visual Studio 2017** missing 19 warnings.
6. **Cppcheck 2.11** missing 23 warnings.

See the 📂[test_results](test_results/) folder for details and older versions. **Note:** all results produced with highest warning level enabled (see below). 


⚠️ Highest Warning Level 
-------------------------
No, the highest warning level is NOT enabled by default. Instead, every compiler sets the default warning level to 'normal', whatever this means. And each one supports different options to be more pedantic:

| Compiler        | Options                           | Comment                                           |
|-----------------|-----------------------------------|---------------------------------------------------|
| *Clang*         | `-Weverything -pedantic`          |                                                   |
| *clang-tidy*    | `-checks=*,-modernize*`           | hints how to modernize the code are switched off  |
| *Cppcheck*      | `--enable=all`                    |                                                   |
| *GCC*           | `-Wall -Wextra -pedantic -Wundef` | -Wall and -Wextra do not enable all warnings! To keep backwards compatibility, -Wall is basically, "All warnings as of 1990." -Wextra covers a lot of the newer warnings, but still misses a few. |
| *Visual Studio* | `/Wall`                           |                                                   |


👮‍ Zero Warnings Policy 
------------------------
It means a project is compiled with the **highest** warning level and **zero** compiler warnings are acceptable.

Introducing the *Zero Warnings Policy* by enabling the highest warning level often results in hundreds or thousands of warnings. To get started you may want to begin with a lower warning level first. Then fix those warnings and gradually dial up the warning level.

As soon as there are no more warnings **turn warnings into errors** to enforce the *Zero Warnings Policy* from now on. That way warnings can no longer be ignored because the build fails. The corresponding compiler options are `-Werror` for Clang and GCC and `/WX` for Visual Studio.

Dear API developers: introducing the *Zero Warnings Policy* heavily depends on the header files being used. Please make sure your header files do not produce any compiler warnings!

Links
-----
* [Diagnostic flags in Clang](https://clang.llvm.org/docs/DiagnosticsReference.html)
* [GCC Warning Options](https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html)
* [Visual Studio Compiler Warnings](https://docs.microsoft.com/en-us/cpp/error-messages/compiler-warnings/compiler-warnings-by-compiler-version)
* [Intel C++ Compilers](https://software.intel.com/en-us/c-compilers)

🤝 Contributing
----------------
* Contributions, suggestions, and improvements are welcome!
* Open an Issue if you encounter bugs or have feature ideas.
* Create a Pull Request if you'd like to improve something.

📜 License & Copyright
-----------------------
This open source project is licensed under the CC0 license. All trademarks are the property of their respective owners.



