import java.util.Scanner;

class Personal{
	String name;
	int age;
	String education;
	double basic;
	double da;
	double hra;
	int exp;
	int loans;
	double loanamt;

	Personal(String name,
	int age,
	String education,
	double basic,
	double da,
	double hra,
	int exp,
	int loans,
	double loanamt){

	this.name=name;
	this.age=age;
	this.education=education;
	this.basic=basic;
	this.da=da;
	this.hra=hra;
	this.exp=exp;
	this.loans=loans;
	this.loanamt=loanamt;
	}

	 void iseligible(Personal p){
		if((p.da+p.hra+p.basic>10000) && p.loans<2 && p.loanamt<20000){
			System.out.println("eligible");

		}
		else 
			System.out.println("not eligible");

	}


	 void taxpay(Personal p){
		double tax=0;
		if((p.da+p.hra+p.basic) < 10000) {
			System.out.println("no tax to be paid");
		}
		else if((p.da+p.hra+p.basic)<20000){
			 tax = 0.2*(p.da+p.hra+p.basic);
			System.out.println(" tax to be paid is "+tax);

		}
		else if ((p.da+p.hra+p.basic)<30000){
			 tax = 0.3*(p.da+p.hra+p.basic);
			System.out.println(" tax to be paid is "+tax);
		}
		else 
			 tax = 0.4*(p.da+p.hra+p.basic);
			System.out.println(" tax to be paid is "+tax);
	}

	 void promotion(Personal p){
		if(p.exp>10 && p.loanamt<10000){
			System.out.println("eligible for promotion");
		}
		else 
			System.out.println("not eligible for promotion");
	}

	 void display(Personal p){
		System.out.println("name of the person is"+p.name);
		System.out.println("age of person is"+p.age);
		System.out.println("education of person is"+p.education);
		System.out.println("salary of person is"+(p.basic+p.hra+p.da));
		System.out.println("year of experience is"+p.exp);
		System.out.println("no of loans "+p.loans);
		System.out.println("total loan amt"+p.loanamt);
		iseligible(p);
		taxpay(p);
		promotion(p);
	}
}


	 class Seven{
		
		public static void main(String[]args){
			Scanner sc = new Scanner(System.in);
		System.out.println("enetr the number of prsons");
		int n = sc.nextInt();
		Personal[] pr;
		 pr = new Personal[n];
		for(int i=0;i<n;i++){
			System.out.println("enter name of the person");
			String na = sc.next();

			System.out.println("enter age of person ");
			int a= sc.nextInt();

			System.out.println("enter education of person");
			String e= sc.nextLine();

			System.out.println("enter basic salary of person ");
			double b = sc.nextDouble();

			System.out.println("Enter the DA salary:");
     		 double d = sc.nextDouble();

      		System.out.println("Enter the HRA salary:\t");
      		double h = sc.nextDouble();

			System.out.println("enter year of experience");
			int y = sc.nextInt();


			System.out.println("enter no of loans");
			int l = sc.nextInt();

			System.out.println("enter total loan amt");
			double la = sc.nextDouble();

			pr[i] = new Personal(na,a,e,b,d,h,y,l,la);
			pr[i].display(pr[i]);

		}
	}

}






















