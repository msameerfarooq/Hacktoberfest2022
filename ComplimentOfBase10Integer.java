import java.util.*;
public class Main
{
    public static int complimentOfBase10Integer(int x){
        int y=0;
        int x1=x;
        while(x!=0){
            x=x>>1;
            y=y<<1;
            y=y|1;
        }
        int x2=~x1;
        int z=x2&y;
        return z;
    }
	public static void main(String[] args) {
	 int x=5;
	 Main obj=new Main();
	 int num=obj.complimentOfBase10Integer(x);
	 System.out.print(num);
	}
}

