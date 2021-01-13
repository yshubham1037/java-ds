import java.util.Scanner;
import java.lang.Math;
import java.lang.*;

class circle{
	double radius;

	circle(){
		radius=0;
	}

	circle(double r){
		radius=r;
	}

	double circle_area(){
		return (Math.PI*radius*radius);
	}
}

class sector extends circle{
	double angle;

	sector(){
		super();
		angle=0;
	}

	sector(double r,double a){
		super(r);
		angle=a;
	}

	double sector_area(){
		return (0.5*radius*radius*angle);
	}
}

class segment extends circle{
	double length;

	segment(){
		super();
		length=0;
		
	}

	segment(double l,double r){
		super(r);
		length=l;
	}

	double segment_area(){
		double h =
      radius - Math.pow(Math.pow(radius, 2) - Math.pow((length / 2), 2), 0.5);
    double seg_area =
      ((h / (6 * length)) * ((3 * h * h) + (4 * length * length)));
    return seg_area;
	}
}

class Eight{
	public static void main(String[]args){
		int ch;
		double r,a,l;
		Scanner sc = new Scanner(System.in);
		while(true){
		System.out.println("enter your choice: 1.area of circle \t 2.area of sector \t 3.area of segment");
		ch = sc.nextInt();
		switch(ch){
			case 1:
					System.out.println("enter the radius of circle");
					r=sc.nextDouble();
					circle c = new circle(r);
					System.out.println("the area of the circle is:"+String.format("%.2f",c.circle_area()));
					break;

			case 2:
					System.out.println("enter the radius of circle");
					r=sc.nextDouble();
					System.out.println("Enter the angle of sector in radians");
          			a = sc.nextDouble();
          			sector s = new sector(r,a);
          			System.out.println(
            		"The area of the segment of the circle is: "+String.format("%.2f",s.sector_area()));
            		break;

            case 3:

            		System.out.println("Enter the radius of the circle");
         			 r = sc.nextDouble();
          			System.out.println("Enter the length of segment of the circle");
         			 l = sc.nextDouble();
         			 segment sg = new segment(l,r);
         			 System.out.println(
            		"The area of the segment of the circle is:"+String.format("%.2f",sg.segment_area()));
            		break;

            case 4:
            		System.exit(0);
            		break;

            default:
            		System.out.println("invalid choice");

		}








		}

	}
}














