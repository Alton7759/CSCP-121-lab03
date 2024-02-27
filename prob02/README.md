# Salary Calculator
Create a program that computes the salary based on an employee's hourly wage and hours worked.
Note that employees may work for fractions of an hour, e.g. 1 and a half hours (1.5 hours).
Use the following formulas:

Less than or equal to 40 hours worked

``` hourly wage * hours worked ```

Over 40, but less than or equal to 65 hours worked

``` (hourly wage * 40) + (hours worked - 40) * (hourly wage * 1.5) ```

Over 65 hours worked

``` (hourly wage * 40) + (hourly wage * 1.5) * 25 + (hours worked - 65) * hourly wage * 2```

Also make sure that the hourly wage and hours worked are positive. Otherwise, display the error message: `"Invalid input"`.

Please see the sample outputs below to guide the design of your program.

## Sample 1
```
Hourly wage: 12.25
Hours worked: 20
Total Salary Owed: $245.00
```

## Sample 2
```
Hourly wage: 22
Hours worked: 2.5
Total Salary Owed: $55.00
```

## Sample 3
```
Hourly wage: -100
Hours worked: 10
Invalid input
```

## Sample 4
```
Hourly wage: 12
Hours worked: -5
Invalid input
```

# Submission checklist
1. Written the function declaration stored in `salary.h` file.
1. Completed function implementation in `salary.cc` file (see [reference](https://github.com/ILXL-guides/function-file-organization)).
1. Called your function in the driver (`main.cc` file).
1. Compiled and ran the driver (`main.cc` file).
1. Manually checked for compilation and logical errors.
1. Ensured no errors on the unit test (`make test`).
1. Followed advice from the stylechecker (`make stylecheck`).
1. Followed advice from the formatchecker to improve code readbility (`make formatcheck`).

# Code Evaluation

If you're using Replit, you can click the "Run" button and follow the prompts to build and test your code.

Otherwise:

Use the `make build` command to compile your code and save it into an executable file called `main`.
Then you can use the `./` command to run it. Take note that if you make any changes to your code, you will need to compile it first before you see changes when running it.

```
make build
./main
```

Alternatively, you can use the `clang++` command to compile your code and the `./` command to run it. 
The sample code below shows how you would compile code in `salary.cc` and `main.cc` and into the executable file `main`. 

```
clang++ -std=c++17 main.cc salary.cc -o main
```


## Run the unit tests

We've provided unit tests, which you can try with ``make test``. Use the output to help you debug any issues in your program.
For code style, make sure you follow advice from the stylechecker using ``make stylecheck``.
For code formatting, make sure you follow advice from the formatchecker to improve code readbility using ``make formatcheck``.

# Submission
1. When everything runs correctly,  let's copy your code into the GitHub repository. The first step is to add your code to what is called the staging area using git's `add` command. The parameter after `add` is the name of the file you want to add. There are cases when you have multiple changed files, so you can just type `git add .` (period) to add all modified files.

    ```
    git add main.cc
    ```
1. Once everything is in the staging area, we use the `commit` command to tell git that we have added everything we need into the staging area.

    ```
    git commit -m "Your description here"
    ```
1. In case it asks you  to configure global variables for an email and name, just copy the commands it provides then replace the dummy text with your email and Github username.

    ```
    git config --global user.email "tuffy@csu.fullerton.edu"
    git config --global user.name "Tuffy Titan"
    ```
    When you're done, make sure you type the `git commit -m "Your description here"` command again.    
1. Lets push all changes to the Github repository using git's `push` command. Provide your Github username and personal access token when you are asked.

    ```
    git push
    ```
1. Once you push, the autograder is automatically kicked off. Check the results in the 'Actions' tab - a green check means that all tests passed.
