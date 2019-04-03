# Optimal-Pay-DynamicProgramming
The optimal pay problem is the problem of paying a certain amount of money using the smallest number of bill
or coin denominations. For instance, in Canada you can pay the amount of 53 dollars using a 50-dollar bill, a
2-dollar coin and a one-dollar coin. Another example is the amount of 187 can be paid using one 100-dollar
bill, one 50-dollar bill, one 20-dollar bill, one 10-dollar bills, one 5-dollar bill and two 1-dollar coins.
The input consists of a
list of bill or coin denominations, the amount you need to pay and the output is the list of the bills or coins
that you need to deliver.
The input is specified in a file called input.txt as follows: the first line contains an integer N specifying how
many denominations are available. The following N lines each contain one number specifying the numerical
values of the denominations (you can assume that this list is given in decreasing order of value). And the last
line contains a number which represents the amount that you have to pay back.
Sample input :
3
50
20
10
90
Sample output :
1
50 1
20 2
