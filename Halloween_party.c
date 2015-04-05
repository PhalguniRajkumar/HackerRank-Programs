//Question for this problem is below the program

#include <stdio.h>

main()
{
int i,T;//T is the number of test cases
scanf("%d",&T);
long int K,result[T];//K is the value of each test cases
for(i=0;i<T;i++)
{
scanf("%ld",&K);
if(K%2==0)
	result[i]=(K/2)*(K/2);//if K is even
else
	result[i]=(K/2)*(K/2)+(K/2);//if K is odd
	//result[i]=(K+1)/2*(K+1)/2-(K+1)/2;
}
for(i=0;i<T;i++)
	printf("%ld\n",result[i]);
}

/*



Problem Statement

Alex is attending a Halloween party with his girlfriend, Silvia. At the party, Silvia spots the corner of an infinite chocolate bar.

If the chocolate can be served as only 1 x 1 sized pieces and Alex can cut the chocolate bar exactly K times, what is the maximum number of chocolate pieces Alex can cut and give Silvia?

Input Format
The first line contains an integer T, the number of test cases. T lines follow.
Each line contains an integer K.

Output Format
T lines; each line should contain an integer that denotes the maximum number of pieces that can be obtained for each test case.

Constraints
1≤T≤10
2≤K≤107

Note: Chocolate must be served in 1 x 1 sized pieces. Alex can't relocate any of the pieces, nor can he place any piece on top of another.

Sample Input #00

4
5
6
7
8

Sample Output #00

6
9
12
16

Explanation
The explanation below is for the first two test cases. The rest of them follow a similar logic.

For the first test-case where K=5, you need 3 horizontal and 2 vertical cuts.
halloweenboard For the second test case, where K=6, you need 3 horizontal and 3 vertical cuts.


*/