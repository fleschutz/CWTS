Test Suite for Compiler Warnings 
================================

**Compiler warnings prevent software bugs before(!) they occur. Sadly, most warnings are either undetected or disabled by default. This repository checks the warning coverage of popular C++ compilers against 70 test cases.**

🏆 Hall of Fame 2025
--------------------
Each test case compiled without a warning or error is a miss. And the winner is:

1. **clang-tidy 20.1.8** which misses [2](test_results/clang-tidy_20.1.8.txt) warnings only. Well done 👍
2. **Visual Studio 2019** misses [17](test_results/visual_studio_2019.txt)
3. **Visual Studio 2017** misses [19](test_results/visual_studio_2017.txt)
4. **Clang 20.1.8** misses [24](test_results/clang_20.1.8.txt)
5. **GCC 15.2.0** misses [32](test_results/gcc_15.2.0.txt)
6. **Cppcheck 2.19.0** misses [33](test_results/cppcheck_2.19.0.txt)

**Note:** The 📂[src](src/) subfolder contains the test cases and the test results are located in: 📂[test_results](test_results/). They also include older versions and the highest warning level has been enabled.

🔧 Installation 
----------------
Just requires *git*, *cmake*, and the *C++ compiler* itself. Then execute in a terminal window: 

```
> git clone https://github.com/fleschutz/CWTS  # or download and unzip the ZIP file (click the green button)
> cd CWTS/src
> cmake .                                      # edit 'CMakeLists.txt' before to select a certain C++ compiler
> make -k                                      # option '-k' means keep going, even on errors
```




⚠️ The Highest Warning Level 
-----------------------------
No, compilers don't enable the highest warning level by default. All have a default warning level of 'normal', far from highest level. And each compiler supports different options to be more pedantic:

| Compiler        | Options                           | Comment                                           |
|-----------------|-----------------------------------|---------------------------------------------------|
| *Clang*         | `-Weverything -pedantic`          |                                                   |
| *clang-tidy*    | `-checks=*,-modernize*`           | all checks except 'modernize' hints               |
| *Cppcheck*      | `--enable=all`                    |                                                   |
| *GCC*           | `-Wall -Wextra -pedantic -Wundef` | -Wall and -Wextra do not enable all warnings! To keep backwards compatibility, -Wall is basically, "All warnings as of 1990." -Wextra covers a lot of the newer warnings, but still misses a few. |
| *Visual Studio* | `/Wall`                           | well done, no bla bla 👍                          |


👮‍ Zero Warnings Policy 
------------------------
It means a project is compiled with the **highest** warning level and **zero** compiler warnings are acceptable.

Introducing the *Zero Warnings Policy* by enabling the highest warning level often results in hundreds or thousands of warnings. To get started you may want to begin with a lower warning level first. Then fix those warnings and gradually dial up the warning level.

As soon as there are no more warnings **turn warnings into errors** to enforce the *Zero Warnings Policy* from now on. That way warnings can no longer be ignored because the build fails. The corresponding compiler options are `-Werror` for Clang and GCC and `/WX` for Visual Studio.

💡 More Information
--------------------
* [Diagnostic flags in Clang](https://clang.llvm.org/docs/DiagnosticsReference.html)
* [GCC Warning Options](https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html)
* [Visual Studio Compiler Warnings](https://docs.microsoft.com/en-us/cpp/error-messages/compiler-warnings/compiler-warnings-by-compiler-version)
* [Intel C++ Compilers](https://software.intel.com/en-us/c-compilers)

🤝 Contributing
----------------
* Contributions, suggestions, and improvements are welcome!
* Open an [Issue](https://github.com/fleschutz/CWTS/issues) if you encounter bugs or have feature ideas.
* Create a [Pull Request](https://github.com/fleschutz/CWTS/pulls) if you'd like to improve something.

📜 License & Copyright
-----------------------
This open source project is licensed under the CC0 license. All trademarks are the property of their respective owners.
























