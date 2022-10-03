import javax.swing.SingleSelectionModel;
import java.util.*;
public class Calculator {
    
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a numbers : ");
        int a = sc.nextInt();
        String operator =sc.next() ;
        int b = sc.nextInt();
        int sum,sub,mul,div;
        switch (operator) {
            case "+":
                sum = a + b;
                System.err.println(sum);
                break;
            case "-":
                sub = a - b;
                System.out.println(sub);
                break;
            case "*":
                mul = a*b;
                System.out.println(mul);
                break;
            case "/":
                div=a/b;
                System.out.println(div);
                break;  
        
            default:
                System.out.println("Invalid input");
                break;
        }
    }
}
