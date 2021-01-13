import java.util.Scanner;
class Fibusingrec{  
    int n1,n2,n3;

    Fibusingrec(){
      n1=0;
      n2=1;
      n3=0;
    }  
    void printFibonacci(int count){    
       if(count>0){    
            n3 = n1 + n2;    
            n1 = n2;    
            n2 = n3;    
            System.out.print(" "+n3);   
            printFibonacci(count-1);    
        }    
    } 
}  
public class Testonea {
  public static void main(String args[]) {
    int n1 = 0, n2 = 1, n3,count;
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the number of terms to be printed");
    count = sc.nextInt();
    System.out.print(n1 + " " + n2);
    for (int i = 2;i < count;++i) { 
      n3 = n1 + n2;
      System.out.print(" " + n3);
      n1 = n2;
      n2 = n3;
    }
    System.out.println("\nFibbonaci series using recursion:");
    System.out.print(0 + " " + 1);
    Fibusingrec f = new Fibusingrec();
    f.printFibonacci(count-2);
    System.out.println("");
  }
}