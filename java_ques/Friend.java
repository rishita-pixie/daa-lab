import java.util.Scanner;
class Friend{
    public static void main(String args[]){
        int num1,num2;
        int sum1=0,sum2=0;
        Scanner sc=new Scanner (System.in);
        System.out.println("enter first number");
        num1=sc.nextInt();
        System.out.println("enter second number");
        num2=sc.nextInt();
        for(int i=1;i<num1;i++){
            if(num1%i==0){
                sum1+=i; }
        }
         for(int i=1;i<num2;i++){
            if(num2%i==0){
                sum2+=i; }
        }
        if((double)sum1/num1==(double)sum2/num2)
{
    System.out.println("friends");
}
else{
    System.out.println("not friends");
} 
   }
}