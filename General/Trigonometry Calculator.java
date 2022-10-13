package mymath;
import java.util.Scanner;
class Trig
{
    double degree,rad;
    Trig(double degree)
    {
        this.degree=degree;
        this.rad=Math.toRadians(this.degree);
    }
    double sin_of_angle()
    {
        return Math.sin(rad);
    }
    double cos_of_angle()
    {
        return Math.cos(rad);
    }
    double tan_of_angle()
    {
        return Math.tan(rad);
    }
    double cosec_of_angle()
    {
        return (1/Math.sin(rad));
    }
    double sec_of_angle()
    {
        return (1/Math.cos(rad));
    }
    double cot_of_angle()
    {
        return (1/Math.tan(rad));
    }
}
class Algebra
{
    float a,b;
    Algebra(float a,float b)
    {
        this.a=a;
        this.b=b;
    }
    float add()
    {
        return (a+b);
    }
    float sub()
    {
        return (a-b);
    }
    float multiply()
    {
        return (a*b);
    }
    float divide()
    {
        return (a/b);
    }
}
class Stat
{
    int size;
    int []arr;
    Stat(int size,int[] arr)
    {
        this.size=size;
        this.arr=arr;
    }
    int mini()
    {
        int min = arr[0];   
        for (int i = 0; i < arr.length; i++)
        {  
            if(arr[i] <min)
            { 
               min = arr[i]; 
            } 
        }
        return min;
    }
    int maxi()
    {
        int max = arr[0];   
        for (int i = 0; i < arr.length; i++)
        {  
            if(arr[i] > max)
            { 
               max = arr[i]; 
            } 
        }
        return max;
    }
    double sum()
    {
        double sum=0;
        for(int i=0;i<size;i++)
        {
            sum+=arr[i];
        }
        return sum;
    }

    double avg()
    {
        return this.sum()/this.size;
    }
}
class PackDemo
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        while(true)
        {
            System.out.println("1.Trignometry\n2.Algebra\n3.Statistic\n4.Exit");
            int ch = sc.nextInt();
            switch(ch)
            {
                case 1: System.out.print("Enter the angle in degree :");
                        double degree=sc.nextDouble();
                        Trig t=new Trig(degree);
                        System.out.println("Sine of angle "+degree+" dregree = "+t.sin_of_angle());
                        System.out.println("Cosineof angle "+degree+" dregree = "+t.cos_of_angle());
                        System.out.println("Tangent of angle "+degree+" dregree = "+t.tan_of_angle());
                        System.out.println("Cosecant of angle "+degree+" dregree = "+t.cosec_of_angle());
                        System.out.println("Secant of angle "+degree+" dregree = "+t.sec_of_angle());
                        System.out.println("Cotangent of angle "+degree+" dregree = "+t.cot_of_angle());
                        break;
                case 2: System.out.print("Enter Any two floating point number : ");
                        float a=sc.nextFloat();
                        float b=sc.nextFloat();
                        Algebra alg=new Algebra(a,b);
                        System.out.println(a+" + "+b +" = "+alg.add());
                        System.out.println(a+" - "+b +" = "+alg.sub());
                        System.out.println(a+" * "+b +" = "+alg.multiply());
                        System.out.println(a+" / "+b +" = "+alg.divide());
                        break;
                case 3: 
                        System.out.print("Enter the no.of entries:");
                        int size=sc.nextInt();
                        System.out.print("Enter the data :");
                        int[] arr=new int[size];
                        for(int i=0;i<size;i++)
                        {
                            arr[i]=sc.nextInt();
                        }
                        Stat st=new Stat(size, arr);
                        System.out.println("Minimum= "+st.mini());
                        System.out.println("Maximum= "+st.maxi());
                        System.out.println("Sum= "+st.sum());
                        System.out.println("Average= "+st.avg());
                        break;
                case 4:
                        System.exit(0);
            }
        }
    }
}
