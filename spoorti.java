import java.util.Scanner;

class Personal {

  String name;
  int age;
  String education;
  double basic, da, hra;
  int years_of_experience;
  int number_of_loans;
  double loan_amount;

  Personal(
    String name,
    int age,
    String education,
    double basic,
    double da,
    double hra,
    int years_of_experience,
    int number_of_loans,
    double loan_amount
  ) {
    this.name = name;
    this.age = age;
    this.education = education;
    this.basic = basic;
    this.da = da;
    this.hra = hra;
    this.years_of_experience = years_of_experience;
    this.number_of_loans = number_of_loans;
    this.loan_amount = loan_amount;
  }

  static void isEligible(Personal p) {
    if (
      p.years_of_experience >= 10 &&
      (p.basic + p.da + p.hra >= 400000) &&
      p.number_of_loans <= 1
    ) {
      System.out.println("The Person is eligible for loan");
    } else {
      System.out.println("The Person is not eleigible for loan");
    }
  }

  static void taxPay(Personal p) {
    if ((p.basic + p.da + p.hra <= 100000)) {
      System.out.println("The user doesn't have to pay any tax");
    } else if ((p.basic + p.da + p.hra <= 200000)) {
      double tax = .2 * (p.basic + p.da + p.hra);
      System.out.println("The tax to be paid by the person is " + tax);
    } else if (p.basic + p.da + p.hra <= 300000) {
      double tax = .3 * (p.basic + p.da + p.hra);
      System.out.println("The tax to be paid by the person is " + tax);
    } else if (p.basic + p.da + p.hra <= 400000) {
      double tax = .35 * (p.basic + p.da + p.hra);
      System.out.println("The tax to be paid by the person is " + tax);
    } else {
      double tax = .4 * (p.basic + p.da + p.hra);
      System.out.println("The tax to be paid by the person is " + tax);
    }
  }

  static void isEligiblePromotion(Personal p) {
    if (p.years_of_experience >= 10 && (p.number_of_loans <= 1)) {
      System.out.println("Person is eligible for promotion");
    } else {
      System.out.println("Person is not eligible for promotion");
    }
  }

  static void display(Personal p) {
    System.out.println("Name of person is :" + p.name);
    System.out.println("Age of person is :" + p.age);
    System.out.println("Education of person is :" + p.education);
    System.out.println("Salary of person is :" + (p.basic + p.da + p.hra));
    System.out.println("Experience of person is :" + p.years_of_experience);
    System.out.println("No of loans  of person are :" + p.number_of_loans);
    System.out.println("Loan amount corresponds to :" + p.loan_amount);
    isEligible(p);
    isEligiblePromotion(p);
    taxPay(p);
  }
}

public class spoorti {

  Scanner sc = new Scanner(System.in);

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println(
      "Enter the number of employees whose detail you want to enter"
    );
    int n = sc.nextInt();

    Personal[] pr = new Personal[n];
    for (int i = 0; i < n; i++) {
      System.out.print("Enter the name of the Employee:\t");
      String na = sc.next();
      System.out.print("Enter the age of "+na+":\t");
      int a = sc.nextInt();
      System.out.print("Enter the education of "+na+":\t");
      String e = sc.next();
      System.out.print("Enter the basic salary:\t");
      double b = sc.nextDouble();
      System.out.print("Enter the DA salary:\t");
      double d = sc.nextDouble();
      System.out.print("Enter the HRA salary:\t");
      double h = sc.nextDouble();
      System.out.print("Enter the years of experience:\t");
      int y = sc.nextInt();
      System.out.print("Enter the number of loans:\t");
      int l = sc.nextInt();
      System.out.print("Ennter the Total loan amount of all the loans:\t");
      double la = sc.nextDouble();

      pr[i] = new Personal(na, a, e, b, d, h, y, l, la);
      System.out.println(
        "------------------Display details--------------------"
      );
      pr[i].display(pr[i]);
      System.out.println(
        "-----------------------------------------------------"
      );
    }
  }
}