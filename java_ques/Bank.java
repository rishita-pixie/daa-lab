import java.util.Scanner;
class Bank{
    public static void main(String args[]){
        Scanner sc =new Scanner(System.in);
        int choice;
        System.out.println("1.term depossit"+"\nrecurring deposit"+"\n enter choice");
        choice=sc.nextInt();
        switch(choice){
            case 1:double p,r,a;
            int n;
            System.out.println("enter principal");
            p=sc.nextDouble();
            System.out.println("enter rate");
r=sc.nextDouble();
System.out.println("enter time(in years)");
n=sc.nextInt();
a=p*(1+(r/100))*n;
System.out.println("maturity amount"+a);
break;
case 2:double p1,r1,a1;
int n1;
 System.out.println("enter monthly installment");
            p1=sc.nextDouble();
            System.out.println("enter rate");
r1=sc.nextDouble();
System.out.println("enter time(in years)");
n1=sc.nextInt();
a1=p1*n1+p1*n1*(n1+1)/2*r1/100*1/12;
System.out.println("maturity amount"+a1);
break;
default:System.out.println("invalid choice");
        }
    }
}

