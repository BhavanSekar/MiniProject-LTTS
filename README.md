# HEAT REGULATOR

![Code quality score](https://www.code-inspector.com/project/24981/score/svg)

![Code grade](https://www.code-inspector.com/project/24981/status/svg)

[![Unit Testing - Unity](https://github.com/BhavanSekar/MiniProject-LTTS/actions/workflows/UnitTesting.yml/badge.svg)](https://github.com/BhavanSekar/MiniProject-LTTS/actions/workflows/UnitTesting.yml)

[![Buildandtest](https://github.com/BhavanSekar/MiniProject-LTTS/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/BhavanSekar/MiniProject-LTTS/actions/workflows/c-cpp.yml)

[![Valgrind_Check](https://github.com/BhavanSekar/MiniProject-LTTS/actions/workflows/ValgrindCheck.yml/badge.svg)](https://github.com/BhavanSekar/MiniProject-LTTS/actions/workflows/ValgrindCheck.yml)

[![cppcheck-action](https://github.com/BhavanSekar/MiniProject-LTTS/actions/workflows/cppcheck-action.yml/badge.svg)](https://github.com/BhavanSekar/MiniProject-LTTS/actions/workflows/cppcheck-action.yml)

## About the application

The Heat regulator takes the input from the temperature sensor, regulates the temperature accordingly and controls the PWM signal accordingly. It also uses an LED to display the real time value.

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

## Folder Structure

| Folder Name | Description |
--------------|--------------
| 1_Requirements | Files elaborating Requirements and Research done |
| 2_Design | Files elaborating the Design of the application |
| 3_Implementation | Files containing source code and relevant documentation |
| 4_Test_Plan | Files elaborating the test plan |
| 5_unit_Testing | Files containing test executables(.c and makefile) |
  
  


