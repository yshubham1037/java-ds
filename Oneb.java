import java.util.Scanner;
class Oneb{

	public static void main(String[]args){
		int i,a,flag=0;
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the number");
		a=sc.nextInt();
		for(i=2;i<=(a/2);i++){
			if(a%i==0){
				flag=1;
			}	

		}

		if(flag==1){
			System.out.println("composite number");

		}
		else 
			System.out.println("prime number");
	}
	
}