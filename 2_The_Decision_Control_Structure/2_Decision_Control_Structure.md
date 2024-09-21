# Decision Control Structure

- Three major decision making instrucitons in C :
    - if
    - if-else
    - switch 
    - (some what less important) conditional operators 

## Decisions! Decisions!

- By default the instructions in a program are executed sequentially.
- Many a times, we want a set of instructions to be executed in one situation, and an entirely different set of instructions to be executed in another situation. 

## The if Statement 
    - `if( this condition is true )` <br>
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;` execute this statement;`
    -Example :  we express a condition using C’s ‘relational’ operators:
        - The relational operators allow us to compare two values to see whether they are equal to each other, unequal, or whether one is greater than the other.
        - ![relationalOperatorsEvaluation](./assets/relationalOperatorsEvaluation.png)
        - While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000. If quantity and price per item are input through the keyboard, write a program to calculate the total expenses
            - [C Program](./totalExpenses.c) <br><br>
            ![conditionalFlowchart](./assets/conditionalFlowchart.png)

### The Real Thing

- General form of if statement is : 
    - `if( expression )` <br>
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;` statement;`
    - the expression can be any valid expression including a relational expression
    - We can even use arithmetic expressions in the if statement.

- In C, non-zero value is considered to be true, whereas 0 is considered to be false.
- -5, 3.14, 10 would be considered to be true.
-  So the issue is not whether the number is integer or float, or whether it is positive or negative. Issue is whether it is zero or non-zero. 

### Multiple Statements within if

- if multiple statements are to be executed then they must be placed within pair of braces
- Example : The current year and the year in which the employee joined the organization are entered through the keyboard. If the number of years for which the employee has served the organization is greater than 3 then a bonus of Rs. 2500/- is given to the employee. If the years of service are not greater than 3, then the program should do nothing. 
    - [C Program](./Bonus.c) <br><br>
    ![multipleIfStatementFlowchart](./assets/multipleIfStatementFlowchart.png)

## The if-else Statement

- else statement helps to executes another group of statements if the expression evaluates to false
- Example : In a company an employee is paid as under: <br>
    If his basic salary is less than Rs. 1500, then HRA = 10% of basic salary and DA = 90% of basic salary. If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic salary. If the employee's salary is input through the keyboard write a program to find his gross salary. 
    - [C Program]()