# The Loop Control Structure

## Loops

- The versatility of the computer lies in its ability to perform a set of instructions repeatedly.
- This repetitive operation is done through a loop control instruction
- There are three methods by way of which we can repeat a part of a program : 
    - (a) Using a <i><b>for</b></i> statement
    - (b) Using a <i><b>while</b></i> statement
    - (c) Using a <i><b>do-while</b></i> statement

## The <i><b>while</b></i> Loop

- The <i><b>while</b></i> loop is ideally suited for cases when we want to do something for fixed number of times.
```
/* Calculation of simple interest for 3 sets of p, n and r */
main()
{
    int p, n, count;
    float r, si;
    count = 1;
    while(count < = 3) // as long as this condition is true, body of while loop keep getting executed repeatedly
    {
        // body of while loop
        printf("\nEnter values of p, n and r");
        scanf("%d %d %f, &p, &n, &r);
        si = p * n * r / 100;
        printf("Simple interest = Rs %f", si);

        count = count + 1; // many a times called as loop counter or index variable
    }
}
```
- the flowchat shows general operations of while loop  :
![whileLoopFlowchat](./asset/whileLoopFlowchat.png)

### Tips and Traps : 
- 
    ```
    intialise loop counter;
    while( test loop counter using a condition )
    {
        do this;
        and this;
        increment loop counter;
    }
    ```
- statements within while loop gets executed till condition remains true, the moment condition changes to false control is passed to first statement that follows
- the condition may use relation or logical operators
- the condition must eventually become false otherwise it would execute forever
- keep in mind the range of data types when evaluating the condition, example the below snippet is a infinite loop
```
    main()
    {
    int i = 1;
        while(i <= 32767) // 32767 + 1 will give integer overflow and make it a value -32678 which will be considered as true
        {
            printf("%d\n", i);
            i = i + 1;
        }
    }
 ```
- semicolons , below example is another indefinite loop as i is not incremented
```
    main()
    {
        int i = 1;
        while(i<=10);
        {
            printf("%d\n", i);
            i = i + 1;
        }
    }
```

### More Operators

