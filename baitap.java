public class baitap {
    
    public static void printOut(int n) {
        if(n==0) return;
        System.out.print(n);
        printOut(n-1);
        System.out.print(n);
    }
    
    public static void dequy(int n) {
        if(n/2 > 1) {
            int m = n/2;
            dequy(m);
        }
        System.out.print(n + " ");
        
    }
    
    public static void main(String[] args) {
        printOut(3);
        
    }
}