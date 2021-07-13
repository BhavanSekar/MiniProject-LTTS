# TEST PLAN

## High level test plan

    
| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** | **Type Of Test**  |    
|-------------|--------------------------------------------------------------|-------------|-------------|----------------|-------------------|
|  H_01       |Integer Value                                                 |   9         |     Wrong   |     Wrong      | Requirement based |
|  H_01       |Float Value                                                   |   8.2       |     Wrong   |     Wrong      |     Float         |
|  H_01       |Char Value                                                    |   A         |     Next    |     Next       |     Float         |

## Low level test plan


| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** | **Type Of Test**  |    
|-------------|--------------------------------------------------------------|-------------|-------------|----------------|-------------------|
|  H_01       |Correct format                                                |   B 3, A 4  |     8.55    |     8.55       | Requirement based |
|  H_01       |Correct format                                                |   C 2, D 4  |     6.33    |     6.33       | Requirement based |
|  H_01       |Correct format                                                |   S 4, S 4  |     10      |     10         | Requirement based |
