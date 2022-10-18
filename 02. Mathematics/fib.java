public class fib {
    public static void main(String[] args) {
        int n = 10;
        for(int i = 1; i <= n; i++){
            System.out.println(fibonacci(i) + " ");
        }
        
        
    }
    public static int fibonacci(int n){
        if (n <= 1)
            return n;
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
