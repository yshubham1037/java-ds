import java.util.Scanner;

class Account{
	int accno;
	String name;
	int ph_no;
	float balamt;

	Account(){
		balamt=100;
		accno=110;
	}

	void getinput(){
		Scanner sc= new Scanner(System.in);
		System.out.println("enter the name");
		name = sc.nextLine();
		System.out.print("Enter phone number: ");
		ph_no = sc.nextInt();
	}

	void deposit(){
		Scanner sc = new Scanner(System.in);
		int depo;
		System.out.print("enter the amount to deposit");
		depo=sc.nextInt();
		balamt+=depo;
		System.out.println("New Balance: "+balamt);
	}

	void withdraw(){
		Scanner sc= new Scanner(System.in);
		int wd;
        System.out.print("Enter the amount to be withdrawn ");
        wd = sc.nextInt();
        if(wd>balamt)
        {
            System.out.println("Current Balance: "+ balamt +" Insufficient amount in the account; transaction cancelled.");
            return ;
        }
       	balamt-=wd;
        System.out.println("Balance after withdraw: "+balamt);
	}

	void display(){
		System.out.println("name is:"+name);
		System.out.println("phone no:"+ph_no);
		System.out.println("account no:"+accno);
		System.out.println("balance amt:"+balamt);

	}



}


class Two{
	public static void main(String[] args){
		int ch;
		Scanner sc= new Scanner(System.in);
		Account ac=new Account();
		ac.getinput();
		while(true){
		System.out.print("enter your choice: 1.desposit\t 2.withdraw\t 3.display \t 4.exit");
		ch=sc.nextInt();
		switch(ch){
		case 1:
                    ac.deposit();
                    break;
                case 2:
                    ac.withdraw();
                    break;
                case 3:
                    ac.display();
                    break;
                case 4:
                    System.exit(0);
                default:
                    break;

		}
}
	}
}































