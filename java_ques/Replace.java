import java.util.Scanner;
class Replace{
    public static void main(String args[]){
Scanner sc=new Scanner (System.in);
int n=sc.nextInt();
int res=0;
int place=1;
while(n>0){
    int digit=n%10;
    if(digit==0){
        digit=1;
    }
    res+=digit*place;
    place=place*10;
    n=n/10;
}
System.out.println(res);

    }
}