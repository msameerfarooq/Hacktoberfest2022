import java.util.Scanner;
public class MatrixMultiplication 
{
int m,n,p,q,i,j,k=0;
int a[][] = new int [10][10];
int b[][] = new int [10][10];
int c[][] = new int [10][10];
Scanner sc = new Scanner (System.in);
void Input ()
{
System.out.println ("Enter no. of Rows & Columns of 1st Matrix");
m = sc.nextInt();
n = sc.nextInt();
System.out.println ("Enter no. of Rows & Columns of 2nd Matrix");
p = sc.nextInt();
q = sc.nextInt();
if (n != p)
{
System.out.println("Matrix Multiplication is not possible");
System.exit(0);
}
else
{
System.out.println("Enter elements of 1st Matrix");
for (i=0;i<m;i++)
for (j=0;j<n;j++)
a[i][j] = sc.nextInt();
System.out.println("Enter elements of 2nd Matrix");
for (i=0;i<p;i++)
for (j=0;j<q;j++)
b[i][j] = sc.nextInt();
}
}
void Calculate ()
{
for (i=0;i<m;i++)
 for (j=0;j<q;j++)
 {
 c[i][j] = 0;
 for (k=0;k<n;k++)
 c[i][j] = c[i][j] +a[i][k]*b[k][j];
 }
}
void Result ()
{
System.out.println ("Product is");
for (int i=0;i<m;i++)
{
for ( int j=0;j<q;j++)
{
System.out.print (c[i][j]+"\t");
}
System.out.print ("\n");
}
}
}
class MulRun
{
public static void main (String args [])
{
MatrixMultiplication mu = new MatrixMultiplication ();
mu.Input();
mu.Calculate();
mu.Result();
}
}
