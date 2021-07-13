# GPA CALCULATOR

![Code quality score](https://www.code-inspector.com/project/24981/score/svg)

![Code grade](https://www.code-inspector.com/project/24981/status/svg)

[![Unit Testing - Unity](https://github.com/BhavanSekar/MiniProject-LTTS/actions/workflows/UnitTesting.yml/badge.svg)](https://github.com/BhavanSekar/MiniProject-LTTS/actions/workflows/UnitTesting.yml)

[![Buildandtest](https://github.com/BhavanSekar/MiniProject-LTTS/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/BhavanSekar/MiniProject-LTTS/actions/workflows/c-cpp.yml)

[![Valgrind_Check](https://github.com/BhavanSekar/MiniProject-LTTS/actions/workflows/ValgrindCheck.yml/badge.svg)](https://github.com/BhavanSekar/MiniProject-LTTS/actions/workflows/ValgrindCheck.yml)

[![cppcheck-action](https://github.com/BhavanSekar/MiniProject-LTTS/actions/workflows/cppcheck-action.yml/badge.svg)](https://github.com/BhavanSekar/MiniProject-LTTS/actions/workflows/cppcheck-action.yml)

## About the application

The GPA calculator takes the grades scored by the student in each subject and the number of credits for which each subject was registered as input, and calculates the GPA(Grade point average).

## List of grade points corresponding to grades

| Grades | Points  |
| ------ | ------- | 
| S      |   10    |
| A      |    9    |
| B      |    8    |
| C      |    7    |
| D      |    6    |
| E      |    5    |

**The grade point average is the weighted averaage of the grades with the credits as the weights.**

## How to run

Download the makefile, Variables.c file and the main.c file and run the following command in the bash(cmd or terminal with gcc installed). Ensure that the variables.c file is added to the path.

**For windows**

```bash
make
grade
```
**For linux**

```bash
make
./grade.out
```
  
  


