import java.util.*;
class Try{
    public static void main(String args[]){
       
       try{
    
        int a=10;
        int b=0;
        int c=a/b;
        System.out.print(c);
       }
       finally{
    System.out.println("this block will always run");
    }
}
}